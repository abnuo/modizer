/*
 * This source code is public domain.
 *
 * Authors: Kenton Varda <temporal@gauge3d.org> (C interface wrapper)
 */

#ifndef MODPLUG_H__INCLUDED
#define MODPLUG_H__INCLUDED

#ifdef __cplusplus
extern "C" {
#endif
    
    /* from libmodplug/sndfile.h */
    /* header is not c clean */
#define MIXING_ATTENUATION 4
#define MOD_TYPE_NONE		0x0
#define MOD_TYPE_MOD		0x1
#define MOD_TYPE_S3M		0x2
#define MOD_TYPE_XM		0x4
#define MOD_TYPE_MED		0x8
#define MOD_TYPE_MTM		0x10
#define MOD_TYPE_IT		0x20
#define MOD_TYPE_669		0x40
#define MOD_TYPE_ULT		0x80
#define MOD_TYPE_STM		0x100
#define MOD_TYPE_FAR		0x200
#define MOD_TYPE_WAV		0x400
#define MOD_TYPE_AMF		0x800
#define MOD_TYPE_AMS		0x1000
#define MOD_TYPE_DSM		0x2000
#define MOD_TYPE_MDL		0x4000
#define MOD_TYPE_OKT		0x8000
#define MOD_TYPE_MID		0x10000
#define MOD_TYPE_DMF		0x20000
#define MOD_TYPE_PTM		0x40000
#define MOD_TYPE_DBM		0x80000
#define MOD_TYPE_MT2		0x100000
#define MOD_TYPE_AMF0		0x200000
#define MOD_TYPE_PSM		0x400000
#define MOD_TYPE_J2B		0x800000
#define MOD_TYPE_ABC		0x1000000
#define MOD_TYPE_PAT		0x2000000
#define MOD_TYPE_UMX		0x80000000 // Fake type



typedef struct _ModPlugFile ModPlugFile;

struct _ModPlugNote {
	unsigned char Note;
	unsigned char Instrument;
	unsigned char VolumeEffect;
	unsigned char Effect;
	unsigned char Volume;
	unsigned char Parameter;
};
typedef struct _ModPlugNote ModPlugNote;

typedef void (*ModPlugMixerProc)(int*, unsigned long, unsigned long);

/* Load a mod file.  [data] should point to a block of memory containing the complete
 * file, and [size] should be the size of that block.
 * Return the loaded mod file on success, or NULL on failure. */
ModPlugFile* ModPlug_Load(const void* data, int size);
/* Unload a mod file. */
void ModPlug_Unload(ModPlugFile* file);

/* Read sample data into the buffer.  Returns the number of bytes read.  If the end
 * of the mod has been reached, zero is returned. */
int  ModPlug_Read(ModPlugFile* file, void* buffer, int size);

/* Get the name of the mod.  The returned buffer is stored within the ModPlugFile
 * structure and will remain valid until you unload the file. */
const char* ModPlug_GetName(ModPlugFile* file);

/* Get the length of the mod, in milliseconds.  Note that this result is not always
 * accurate, especially in the case of mods with loops. */
int ModPlug_GetLength(ModPlugFile* file);

/* Seek to a particular position in the song.  Note that seeking and MODs don't mix very
 * well.  Some mods will be missing instruments for a short time after a seek, as ModPlug
 * does not scan the sequence backwards to find out which instruments were supposed to be
 * playing at that time.  (Doing so would be difficult and not very reliable.)  Also,
 * note that seeking is not very exact in some mods -- especially those for which
 * ModPlug_GetLength() does not report the full length. */
void ModPlug_Seek(ModPlugFile* file, int millisecond);

enum _ModPlug_Flags
{
	MODPLUG_ENABLE_OVERSAMPLING     = 1 << 0,  /* Enable oversampling (*highly* recommended) */
	MODPLUG_ENABLE_NOISE_REDUCTION  = 1 << 1,  /* Enable noise reduction */
	MODPLUG_ENABLE_REVERB           = 1 << 2,  /* Enable reverb */
	MODPLUG_ENABLE_MEGABASS         = 1 << 3,  /* Enable megabass */
	MODPLUG_ENABLE_SURROUND         = 1 << 4   /* Enable surround sound. */
};

enum _ModPlug_ResamplingMode
{
	MODPLUG_RESAMPLE_NEAREST = 0,  /* No interpolation (very fast, extremely bad sound quality) */
	MODPLUG_RESAMPLE_LINEAR  = 1,  /* Linear interpolation (fast, good quality) */
	MODPLUG_RESAMPLE_SPLINE  = 2,  /* Cubic spline interpolation (high quality) */
	MODPLUG_RESAMPLE_FIR     = 3   /* 8-tap fir filter (extremely high quality) */
};

typedef struct _ModPlug_Settings
{
	int mFlags;  /* One or more of the MODPLUG_ENABLE_* flags above, bitwise-OR'ed */
	
	/* Note that ModPlug always decodes sound at 44100kHz, 32 bit, stereo and then
	 * down-mixes to the settings you choose. */
	int mChannels;       /* Number of channels - 1 for mono or 2 for stereo */
	int mBits;           /* Bits per sample - 8, 16, or 32 */
	int mFrequency;      /* Sampling rate - 11025, 22050, or 44100 */
	int mResamplingMode; /* One of MODPLUG_RESAMPLE_*, above */

	int mStereoSeparation; /* Stereo separation, 1 - 256 */
	int mMaxMixChannels; /* Maximum number of mixing channels (polyphony), 32 - 256 */
	
	int mReverbDepth;    /* Reverb level 0(quiet)-100(loud)      */
	int mReverbDelay;    /* Reverb delay in ms, usually 40-200ms */
	int mBassAmount;     /* XBass level 0(quiet)-100(loud)       */
	int mBassRange;      /* XBass cutoff in Hz 10-100            */
	int mSurroundDepth;  /* Surround level 0(quiet)-100(heavy)   */
	int mSurroundDelay;  /* Surround delay in ms, usually 5-40ms */
	int mLoopCount;      /* Number of times to loop.  Zero prevents looping.
	                        -1 loops forever. */
} ModPlug_Settings;

struct _ModPlugFile {
    openmpt_module* mod;
    signed short* buf;
    signed int* mixerbuf;
    char* name;
    char* message;
    ModPlug_Settings settings;
    ModPlugMixerProc mixerproc;
    ModPlugNote** patterns;
};

/* Get and set the mod decoder settings.  All options, except for channels, bits-per-sample,
 * sampling rate, and loop count, will take effect immediately.  Those options which don't
 * take effect immediately will take effect the next time you load a mod. */
void ModPlug_GetSettings(ModPlug_Settings* settings);
void ModPlug_SetSettings(const ModPlug_Settings* settings);

/* New ModPlug API Functions */
/* NOTE: Master Volume (1-512) */
unsigned int ModPlug_GetMasterVolume(ModPlugFile* file) ;
void ModPlug_SetMasterVolume(ModPlugFile* file,unsigned int cvol) ;

int ModPlug_GetCurrentSpeed(ModPlugFile* file);
int ModPlug_GetCurrentTempo(ModPlugFile* file);
int ModPlug_GetCurrentOrder(ModPlugFile* file);
int ModPlug_GetCurrentPattern(ModPlugFile* file);
int ModPlug_GetCurrentRow(ModPlugFile* file);
int ModPlug_GetPlayingChannels(ModPlugFile* file);
int ModPlug_GetChannelVolume(ModPlugFile *file,int channel);

void ModPlug_SeekOrder(ModPlugFile* file,int order);
int ModPlug_GetModuleType(ModPlugFile* file);
char* ModPlug_GetMessage(ModPlugFile* file);
    
const char *ModPlug_GetModuleTypeLStr(ModPlugFile* file);
const char *ModPlug_GetModuleContainerLStr(ModPlugFile* file);


#ifndef MODPLUG_NO_FILESAVE
/*
 * EXPERIMENTAL Export Functions
 */
/*Export to a Scream Tracker 3 S3M module. EXPERIMENTAL (only works on Little-Endian platforms)*/
char ModPlug_ExportS3M(ModPlugFile* file, const char* filepath);

/*Export to a Extended Module (XM). EXPERIMENTAL (only works on Little-Endian platforms)*/
char ModPlug_ExportXM(ModPlugFile* file, const char* filepath);

/*Export to a Amiga MOD file. EXPERIMENTAL.*/
char ModPlug_ExportMOD(ModPlugFile* file, const char* filepath);

/*Export to a Impulse Tracker IT file. Should work OK in Little-Endian & Big-Endian platforms :-) */
char ModPlug_ExportIT(ModPlugFile* file, const char* filepath);
#endif // MODPLUG_NO_FILESAVE

unsigned int ModPlug_NumInstruments(ModPlugFile* file);
unsigned int ModPlug_NumSamples(ModPlugFile* file);
unsigned int ModPlug_NumPatterns(ModPlugFile* file);
unsigned int ModPlug_NumChannels(ModPlugFile* file);
unsigned int ModPlug_SampleName(ModPlugFile* file, unsigned int qual, char* buff);
unsigned int ModPlug_InstrumentName(ModPlugFile* file, unsigned int qual, char* buff);

/*
 * Retrieve pattern note-data
 */
ModPlugNote* ModPlug_GetPattern(ModPlugFile* file, int pattern, unsigned int* numrows);

/*
 * =================
 * Mixer callback
 * =================
 *
 * Use this callback if you want to 'modify' the mixed data of LibModPlug.
 * 
 * void proc(int* buffer,unsigned long channels,unsigned long nsamples) ;
 *
 * 'buffer': A buffer of mixed samples
 * 'channels': N. of channels in the buffer
 * 'nsamples': N. of samples in the buffeer (without taking care of n.channels)
 *
 * (Samples are signed 32-bit integers)
 */
void ModPlug_InitMixerCallback(ModPlugFile* file,ModPlugMixerProc proc) ;
void ModPlug_UnloadMixerCallback(ModPlugFile* file) ;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
