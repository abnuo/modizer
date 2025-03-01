/*
 *  ModizerConstants.h
 *  modizer
 *
 *  Created by yoyofr on 22/08/10.
 *  Copyright 2010 __YoyoFR / Yohann Magnien__. All rights reserved.
 *
 */

//#define LOAD_PROFILE

#define ACTION_COLOR_RED ((float)(0xD5)/255.0)
#define ACTION_COLOR_GREEN ((float)(0x4A)/255.0)
#define ACTION_COLOR_BLUE ((float)(0xCA)/255.0)

#define MODIZER_COMPIL 1

#define DEFAULT_WAIT_TIME_MS  0.001   //in s
#define DEFAULT_WAIT_TIME_UADE_MS  0.001   //in s

//#define STATISTICS_URL @"http://localhost:8081"
#define STATISTICS_URL @"https://modizerdb.appspot.com"
#define USERGUIDE_URL @"UserGuide"
#define WORLDCHARTS_DEFAULTLIST @"ListALL"

#define BROWSE_LOCAL_MODE 0
#define BROWSE_MODLAND_MODE 1
#define BROWSE_HVSC_MODE 2
#define BROWSE_PLAYLIST_MODE 3
#define BROWSE_RATED_MODE 4
#define BROWSE_MOSTPLAYED_MODE 5
#define BROWSE_WEB_MODE 6
#define BROWSE_WORLDCHARTS_MODE 7
#define BROWSE_USERGUIDE_MODE 8

#define INTEGRATED_PLAYLIST_NOWPLAYING 1
#define INTEGRATED_PLAYLIST_MOSTPLAYED 2
#define INTEGRATED_PLAYLIST_FAVORITES 3

#define PLAYBACK_FREQ 44100

//PLAYBACK_FREQ/30

#define SOUND_BUFFER_SIZE_SAMPLE 1024
//PLAYBACK_FREQ/30
#define SOUND_BUFFER_NB 24 //64
#define MIDIFX_OFS 12 //32

#define SOUND_MAXMOD_CHANNELS 256

#define SPECTRUM_DECREASE_RATE 0.8f
#define SPECTRUM_BANDS 64
#define BEAT_THRESHOLD_MIN 256
#define BEAT_THRESHOLD_FACTOR 2.0f

#define EQUALIZER_NB_BANDS 10

#define SND_THREAD_PRIO 0.9f

#define SEEK_START_MARGIN_FROM_END 2000

/*#define GME_DEFAULT_LENGTH 150000
#define SID_DEFAULT_LENGTH 150000
#define SC68_DEFAULT_LENGTH 150000
#define MDX_DEFAULT_LENGTH 150000
#define PMD_DEFAULT_LENGTH 150000
#define AOSDK_DEFAULT_LENGTH 150000*/

#define SONG_DEFAULT_LENGTH 150000

#define MAX_STIL_DATA_LENGTH 8192

#define VERSION_MAJOR 2
#define VERSION_MAJOR_STR "2"
#define VERSION_MINOR 96
#define VERSION_MINOR_STR "96"


#define MAX_PL_ENTRIES 65536

#define MAX_RANDFX_TIME 15   //max is in fact min + max (seconds)
#define MIN_RANDFX_TIME 15
#define ALLOW_CHANGE_ON_BEAT_TIME 10   //change on beat is allowed after this threashold (seconds)

#define MODLAND_BASEDIR @"MODLAND"
#define HVSC_BASEDIR @"HVSC"
#define ASMA_BASEDIR @"ASMA"

#define DATABASENAME_MAIN @"databaseMAIN.modizerdb"
#define DATABASENAME_USER @"database.modizerdb"
#define DATABASENAME_TMP @"database.modizerdb.old"

#define MODLAND_HOST_DEFAULT "ftp://ftp.modland.com"
#define MODLAND_HOST_ALT1 "ftp://ftp.amigascne.org/mirrors/ftp.modland.com"
#define MODLAND_HOST_ALT2 "ftp://modland.ziphoid.com"

#define HVSC_HOST_DEFAULT "http://hvsc.perff.dk"
#define HVSC_HOST_ALT1 "https://hvsc.etv.cx/?path=C64Music"
#define HVSC_HOST_ALT2 "http://www.prg.dtu.dk/HVSC/C64Music"


//#define ASMA_FTPHOST @"malus.exotica.org.uk/pub/exotica/media/audio/Atari_SAP_Music_Archive/ASMA/"
#define ASMA_HOST_DEFAULT "http://asma.scene.pl/export/1674/trunk/asma"
#define ASMA_HOST_ALT1 "http://asma.atari.org/asma"
#define ASMA_HOST_ALT2 "http://asma.atariportal.cz/ASMA"



//#define ASMA_FTPHOST "aero.exotica.org.uk/pub/mirrors/exotica/exotica/media/audio/Atari_SAP_Music_Archive/ASMA/"

#define SUPPORTED_FILETYPE_COVER @"GIF,JPEG,JPG,PNG"

#define SUPPORTED_FILETYPE_MDX @"MDX"

#define SUPPORTED_FILETYPE_PMD @"M,M2,MZ"

#define SUPPORTED_FILETYPE_SID @"SID"

#define SUPPORTED_FILETYPE_STSOUND @"YM"

#define SUPPORTED_FILETYPE_SC68 @"SC68,SNDH"

#define SUPPORTED_FILETYPE_ASAP @"SAP,CMC,CM3,CMR,CMS,DMC,DLT,MPT,MPD,RMT,TMC,TM8,TM2"

#define SUPPORTED_FILETYPE_VGM @"VGM,VGZ"
//,DRO,CMF

#define SUPPORTED_FILETYPE_ARCHIVE @"7Z,ZIP,GZ,RAR,RSN,LZH,LHA"

#define SUPPORTED_FILETYPE_ARCFILE @"7Z,ZIP,GZ,RAR,RSN"
#define SUPPORTED_FILETYPE_GME_MULTISONGS @"NSF,NSFE,GBS,KES,HES"

#define SUPPORTED_FILETYPE_DUMB @"MOD,MDZ,FT,S3M,S3Z,STM,STZ,IT,ITZ,XM,XMZ,PTM,PTZ,MTM,MTZ,669,PSM,UMX,AM,J2B,DSM,AMF,OKT,OKTA"

#define SUPPORTED_FILETYPE_LHA_ARCHIVE @"LZH,LHA"

#define SUPPORTED_FILETYPE_UADE_WITHEXTFILE @"MDAT,SNG,DUM"

#define SUPPORTED_FILETYPE_UADE @"AST,AHX,THX,ADPCM,AMC,ABK,AAM,ALP,AON,AON4,AON8,ADSC,MOD_ADSC4,BSS,BD,BDS,UDS,KRIS,CIN,CORE,CUS,CUST,CUSTOM,\
CM,RK,RKB,DZ,MKIIO,DL,DL_DELI,DLN,DH,DW,DWOLD,DLM2,DM2,DLM1,DM1,DSR,DB,DIGI,DSC,DSS,DNS,EMS,EMSV6,EX,\
FC13,FC3,FC,FC14,FC4,FRED,GRAY,BFC,BSI,FC-BSI,FP,FW,GLUE,GM,EA,MG,HD,HIPC,SOC,EMOD,QC,IMS,DUM,IS,IS20,\
JAM,JC,JMF,JCB,JCBO,JPN,JPND,JP,JT,MON_OLD,JO,HIP,MCMD,SOG,HIP7,S7G,HST,KH,POWT,PT,LME,MON,MFP,HN,MTP2,\
THN,MC,MCR,MCO,MK2,MKII,AVP,MW,MAX,MCMD_ORG,MED,MMD0,MMD1,MMD2,MSO,MD,MMDC,DMU,MUG,DMU2,MUG2,MA,MM4,\
MM8,MMS,NTP,TWO,OCTAMED,OKT,ONE,DAT,PS,SNK,PVP,PAP,PSA,MOD_DOC,MOD15,MOD15_MST,MOD_NTK,MOD_NTK1,MOD_NTK2,\
MOD_NTKAMP,MOD_FLT4,MOD,MOD_COMP,!PM!,40A,40B,41A,50A,60A,61A,AC1,AC1D,AVAL,CHAN,CP,CPLX,CRB,DI,EU,FC-M,FCM,\
FT,FUZ,FUZZ,GMC,GV,HMC,HRT,HRT!,ICE,IT1,KEF,KEF7,KRS,KSM,LAX,MEXXMP,MPRO,NP,NP1,NP2,NOISEPACKER2,NP3,NOISEPACKER3,\
NR,NRU,NTPK,P10,P21,P30,P40A,P40B,P41A,P4X,P50A,P5A,P5X,P60,P60A,P61,P61A,P6X,PHA,PIN,PM,PM0,PM01,PM1,PM10C,PM18A,\
PM2,PM20,PM4,PM40,PMZ,POLK,PP10,PP20,PP21,PP30,PPK,PR1,PR2,PROM,PRU,PRU1,PRU2,PRUN,PRUN1,PRUN2,PWR,PYG,PYGM,PYGMY,\
SKT,SKYT,SNT,SNT!,ST2,ST26,ST30,STAR,STPK,TP,TP1,TP2,TP3,UN2,UNIC,UNIC2,WN,XAN,XANN,ZEN,PUMA,RJP,SNG,RIFF,\
RH,RHO,SA-P,SCUMM,S-C,SCN,SCR,SID,SID1,SMN,SID2,MOK,SA,SONIC,SA_OLD,SMUS,SNX,TINY,SPL,SC,SCT,PSF,\
SFX,SFX13,TW,SM,SM1,SM2,SM3,SMPRO,BP,SNDMON,BP3,SJS,JD,DODA,SAS,SS,SB,JPO,JPOLD,SUN,SYN,SDR,OSP,\
ST,SYNMOD,TFMX1.5,TFHD1.5,TFMX7V,TFHD7V,MDAT,TFMXPRO,TFHDPRO,TFMX,MDST,THM,TF,TME,SG,DP,TRC,TRO,TRONIC,MOD15_UST,\
VSS,WB,ML,MOD15_ST-IV,AGI,TPU,QPA,SQT,QTS"
//deleted : MID

#define SUPPORTED_FILETYPE_HVL @"AHX,HVL"

#define SUPPORTED_FILETYPE_MODPLUG @"FT,MOD,MO3,S3M,XM,MTM,IT,669,ULT,STM,FAR,WAV,AMF,AMS,DSM,MDL,OKT,DMF,PTM,DBM,MT2,AMF0,PSM,J2B,ABC,PAT,UMX,GDM,XPK,PPM,MMCMP,MPTM"
//deleted : MID (use timidity instead)
//deleted : MMDC,MED,MMD0,MMD1,MMD2 (use UADE instead)

#define SUPPORTED_FILETYPE_XMP @"MED,MMD0,MMD1,MMD2,MMD3,MMD4,MOD,S3M,XM,IT,FLX,AMF,GMC,J2B,PSM,UMX,GDM,669,FNK,LIQ,WOW,MTM,PTM,RTM,STM,ULT,DMF,KRIS,DBM"

#define SUPPORTED_FILETYPE_GME @"AY,GBS,GYM,HES,KSS,NSF,NSFE,SAP,SFM,SGC,SPC,VGM,VGZ"
#define SUPPORTED_FILETYPE_GME_WITHEXTFILE @"AY,GBS,GYM,HES,KSS,NSF,NSFE,SAP,SFM,SGC,SPC,VGM,VGZ"
#define SUPPORTED_FILETYPE_GME_EXT @"AY,GBS,GYM,HES,KSS,M3U,NSF,NSFE,SAP,SFM,SGC,SPC,VGM,VGZ"

#define SUPPORTED_FILETYPE_ADPLUG @"A2M,ADL,ADLIB,AGD,AMD,AS3M,BAM,BMF,CFF,CMF,D00,DFM,DM0,DMO,DR0,DRO,DTM,GOT,HA2,HSC,HSP,HSQ,IMF,IMS,JBM,KSM,LAA,LDS,M,MAD,MDI,MKJ,MSC,MTK,MUS,RAC,RAD,RAW,RIX,ROL,S3M,SA2,SAT,SCI,SDB,SNG,SOP,SQX,XAD,XMS,XSM,WLF"
//deleted : MID,VGM,VGZ

#define SUPPORTED_FILETYPE_SEXYPSF_WITHEXTFILE @"MINIPSF"
#define SUPPORTED_FILETYPE_SEXYPSF @"PSF,MINIPSF"
#define SUPPORTED_FILETYPE_SEXYPSF_EXT @"PSF,MINIPSF,PSFLIB"

#define SUPPORTED_FILETYPE_AOSDK_WITHEXTFILE @"MINIPSF2,MINISPU,MINIDSF,MINIQSF,MINISSF"
#define SUPPORTED_FILETYPE_AOSDK @"PSF2,MINIPSF2,SPU,MINISPU,DSF,MINIDSF,QSF,MINIQSF,SSF,MINISSF"
#define SUPPORTED_FILETYPE_AOSDK_EXT @"PSF2,MINIPSF2,SPU,MINISPU,DSF,MINIDSF,QSF,MINIQSF,SSF,MINISSF,PSF2LIB,PSFLIB,SPULIB,DSFLIB,QSFLIB,SSFLIB"

#define SUPPORTED_FILETYPE_GSF_WITHEXTFILE @"MINIGSF"
#define SUPPORTED_FILETYPE_GSF @"GSF,MINIGSF"
#define SUPPORTED_FILETYPE_GSF_EXT @"GSF,MINIGSF,GSFLIB"

#define SUPPORTED_FILETYPE_WMIDI @"MID,MIDI"

#define SUPPORTED_FILETYPE_LAZYUSF_WITHEXTFILE @"MINIUSF"
#define SUPPORTED_FILETYPE_LAZYUSF @"USF,MINIUSF"
#define SUPPORTED_FILETYPE_LAZYUSF_EXT @"USF,MINIUSF,USFLIB"

#define SUPPORTED_FILETYPE_VGMSTREAM @"04SW,208,2DX9,2PSF,3DO,4,800,9TAV,ADPCM,AAC,AAX,ABK,ACB,ACM,ACX,ADM,ADP,ADPCM,ADPCMX,ADS,ADW,ADX,AFC,AFS2,AGSC,AHV,AHX,AI,AIF,AIF-LOOP,AIFC,AIFCL,AIFF,AIFFL,AIX,AKB,AL,AL2,AMTS,AO,AP,APC,AS4,ASD,ASF,ASR,ASS,AST,AT3,AT9,ATSL,ATSL3,ATSL4,ATX,AUD,AUS,AWB,AWC,B1S,BAF,BAKA,BANK,BAO,BAR,BCSTM,BCWAV,BD3,BDSP,BFSTM,BFWAV,BFWAVNSMBU,BG00,BGM,BGW,BH2PCM,BIK,BIK2,BIKA,BIN,BK2,BLK,BMDX,BMS,BNK,BNM,BNS,BNSF,BO2,BRSTM,BRSTMSPM,BSF,BSND,BTSND,BVG,BWAV,BYTES,CAF,CAPDSP,CBD2,CCC,CD,CFN,CHK,CKB,CKD,CKS,CNK,CPK,CPS,CSB,CSMP,CTRL,CVS,CWAV,CXS,DA,DAT,DATA,DAX,DBM,DCS,DCT,DDSP,DE2,DEC,DIVA,DMSG,DS2,DSB,DSF,DSP,DSPW,DTK,DVI,DXH,E4X,EAM,EAS,EMFF,ENM,ENO,ENS,EXA,EZW,FAG,FDA,FFW,FILP,FLX,FSB,FSV,FWAV,FWSE,G1L,GBTS,GCA,GCM,GCUB,GCW,GENH,GIN,GMS,GSB,GSF,GTD,GWM,H4M,HAB,HCA,HDR,HGC1,HIS,HPS,HSF,HWAS,HX2,HX3,HXC,HXD,HXG,HXX,IAB,IADP,IDMSF,IDSP,IDVI,IDWAV,IDXMA,IFS,IKM,ILD,IMA,IMC,IMX,INT,IS14,ISB,ISD,ISWS,ITL,IVAG,IVAUD,IVB,JOE,JSTM,KAT,KCES,KCEY,KM9,KNS,KOVS,KRAW,KTAC,KTSL2ASBIN,KTSS,KVS,L,LAAC,LAIF,LAIFC,LAIFF,LASF,LBIN,LEG,LEP,LIN,LM0,LM1,LM2,LM3,LM4,LM5,LM6,LM7,LMP3,LMP4,LOGG,LOPUS,LP,LPCM,LPK,LPS,LRMB,LSE,LSF,LSTM,LWAV,M4A,M4V,MAB,MAD,MAP,MATX,MC3,MCA,MCADPCM,MCG,MDS,MDSP,MED,MI4,MIB,MIC,MIHB,MJB,MNSTR,MOGG,MP3,MP4,MPDSP,MPF,MS,MSA,MSADPCM,MSB,MSD,MSF,MSS,MSV,MSVP,MTA2,MTAF,MUL,MUPS,MUS,MUSC,MUSX,MWV,MXST,MYSPD,N64,NAAC,NDP,NDS,NGCA,NLSD,NOP,NPS,NPSF,NSOPUS,NUB,NUB2,NUS3AUDIO,NUS3BANK,NWA,NWAV,NXA,OGG,OGL,OMU,OPUS,OPUSX,OTM,OVB,P2BT,P3D,PAST,PCM,PDT,PFLT,PK,PNB,PONA,POS,PS2STM,PSF,PSH,PSND,PSW,PXA,R,RAD,RAK,RAS,RAW,RKV,RND,ROF,RPGMVO,RRDS,RSD,RSF,RSM,RSP,RSTM,RWAR,RWAV,RWS,RWSD,RWX,RXW,S14,SAB,SAD,SAF,SAP,SB0,SB1,SB2,SB3,SB4,SB5,SB6,SB7,SBIN,SBK,SBR,SBV,SC,SCD,SCH,SD9,SDF,SDT,SEB,SED,SEG,SF0,SFL,SFS,SFX,SGB,SGD,SGX,SL3,SLI,SM0,SM1,SM2,SM3,SM4,SM5,SM6,SM7,SMC,SMK,SMP,SMPL,SMV,SND,SNDS,SNG,SNGW,SNR,SNS,SNU,SOD,SON,SPD,SPK,SPM,SPS,SPSD,SPW,SS2,SSM,SSS,STER,STM,STMA,STR,STREAM,STRM,STS,STX,SVAG,SVG,SVS,SWAG,SWAV,SWD,SWITCH_AUDIO,SX,SXD,SXD1,SXD2,SXD3,TEC,TGQ,TGV,THP,TK5,TMX,TRA,TUN,TXTH,TXTP,TYDSP,UE4OPUS,ULW,UM3,UTK,UV,V0,V1,VA3,VAG,VAI,VAS,VAWX,VB,VBK,VDM,VDS,VGS,VGV,VID,VIG,VIS,VMS,VOI,VP6,VPK,VS,VSF,VSV,VXN,WAA,WAC,WAD,WAF,WAM,WAS,WAV,WAVC,WAVE,WAVEBATCH,WAVM,WAY,WB,WB2,WBD,WD,WEM,WII,WMA,WMUS,WP2,WPD,WSD,WSI,WUA,WV2,WV6,WVE,WVS,WVX,X,XA,XA2,XA30,XAG,XAU,XAV,XEN,XMA,XMA2,XMD,XMU,XNA,XNB,XOPUS,XPS,XSE,XSEW,XSF,XSS,XVAG,XVAS,XWAV,XWB,XWC,XWM,XWMA,XWS,XWV,YDSP,YMF,ZIC,ZSD,ZSM,ZSS,ZWDSP,ZWV"

#define SUPPORTED_FILETYPE_MPG123 @"MP3"

#define SUPPORTED_FILETYPE_2SF_WITHEXTFILE @"MININCSF,MINI2SF"
#define SUPPORTED_FILETYPE_2SF @"NCSF,MININCSF,2SF,MINI2SF"
#define SUPPORTED_FILETYPE_2SF_EXT @"NCSF,MININCSF,NCSFLIB,2SF,MINI2SF,2SFLIB"

//remove temporary snsf until right playback library implemented
#define SUPPORTED_FILETYPE_SNSF_WITHEXTFILE @"" //@"MINISNSF"
#define SUPPORTED_FILETYPE_SNSF @"" //@"SNSF,MINISNSF"
#define SUPPORTED_FILETYPE_SNSF_EXT @"" //@"SNSF,MINISNSF,SNSFLIB"


#define extAMIGAList @"AST,AHX,THX,ADPCM,AMC,ABK,AAM,ALP,AON,AON4,AON8,ADSC,MOD_ADSC4,BSS,BD,BDS,UDS,KRIS,CIN,CORE,CUS,CUST,CUSTOM,CM,RK,RKB,DZ,MKIIO,DL,DL_DELI,DLN,DH,DW,DWOLD,DLM2,DM2,DLM1,DM1,DSR,DB,DIGI,DSC,DSS,DNS,EMS,EMSV6,EX,FC13,FC3,FC,FC14,FC4,FRED,GRAY,BFC,BSI,FC-BSI,FP,FW,GLUE,GM,EA,MG,HD,HIPC,SOC,EMOD,QC,IMS,DUM,IS,IS20,JAM,JC,JMF,JCB,JCBO,JPN,JPND,JP,JT,MON_OLD,JO,HIP,MCMD,SOG,HIP7,S7G,HST,KH,POWT,PT,LME,MON,MFP,HN,MTP2,THN,MC,MCR,MCO,MK2,MKII,AVP,MW,MAX,MCMD_ORG,MED,MMD0,MMD1,MMD2,MSO,MD,MMDC,DMU,MUG,DMU2,MUG2,MA,MM4,MM8,MMS,NTP,TWO,OCTAMED,OKT,ONE,DAT,PS,SNK,PVP,PAP,PSA,MOD_DOC,MOD15,MOD15_MST,MOD_NTK,MOD_NTK1,MOD_NTK2,MOD_NTKAMP,MOD_FLT4,MOD,MOD_COMP,!PM!,40A,40B,41A,50A,60A,61A,AC1,AC1D,AVAL,CHAN,CP,CPLX,CRB,DI,EU,FC-M,FCM,FT,FUZ,FUZZ,GMC,GV,HMC,HRT,HRT!,ICE,IT1,KEF,KEF7,KRS,KSM,LAX,MEXXMP,MPRO,NP,NP1,NP2,NOISEPACKER2,NP3,NOISEPACKER3,NR,NRU,NTPK,P10,P21,P30,P40A,P40B,P41A,P4X,P50A,P5A,P5X,P60,P60A,P61,P61A,P6X,PHA,PIN,PM,PM0,PM01,PM1,PM10C,PM18A,PM2,PM20,PM4,PM40,PMZ,POLK,PP10,PP20,PP21,PP30,PPK,PR1,PR2,PROM,PRU,PRU1,PRU2,PRUN,PRUN1,PRUN2,PWR,PYG,PYGM,PYGMY,SKT,SKYT,SNT,SNT!,ST2,ST26,ST30,STAR,STPK,TP,TP1,TP2,TP3,UN2,UNIC,UNIC2,WN,XAN,XANN,ZEN,PUMA,RJP,SNG,RIFF,RH,RHO,SA-P,SCUMM,S-C,SCN,SCR,SID,SID1,SMN,SID2,MOK,SA,SONIC,SA_OLD,SMUS,SNX,TINY,SPL,SC,SCT,SFX,SFX13,TW,SM,SM1,SM2,SM3,SMPRO,BP,SNDMON,BP3,SJS,JD,DODA,SAS,SS,SB,JPO,JPOLD,SUN,SYN,SDR,OSP,ST,SYNMOD,TFMX1.5,TFHD1.5,TFMX7V,TFHD7V,MDAT,TFMXPRO,TFHDPRO,TFMX,MDST,THM,TF,TME,SG,DP,TRC,TRO,TRONIC,MOD15_UST,VSS,WB,ML,MOD15_ST-IV,AGI,TPU,QPA,SQT,QTS"
#define extPCList @"FT,MOD,MO3,S3M,XM,MMD3,MMD4,MTM,IT,669,ULT,STM,FAR,WAV,AMF,AMS,DSM,MDL,OKT,DMF,PTM,DBM,MT2,AMF0,PSM,J2B,ABC,PAT,UMX,A2M,ADL,AMD,AS3M,BAM,BMF,CFF,CMF,D00,DFM,DM0,DMO,DR0,DRO,DTM,HSC,HSP,IMF,KSM,LAA,LDS,M,MAD,MKJ,MSC,MTK,RAD,RAW,RIX,ROL,SA2,SAT,SCI,SNG,XAD,XMS,XSM,MPTM"

#define extC64ChipList @"SID,AHX,HVL"
#define extSNESList @"SPC,RSN"
#define extNESList @"NSF,NSFE"
#define extGBList @"GBS"
#define extSEGAMDList @"GYM,VGM,VGZ"
#define extNECList @"HES"
#define extMSXList @"KSS"
#define extPOKEYList @"SAP,CMC,CM3,CMR,CMS,DMC,DLT,MPT,MPD,RMT,TMC,TM8,TM2"
#define extYMAYList @"YM,AY"
#define extATARISTList @"SC68,SNDH"
#define extPS1List @"PSF,MINIPSF,SPU,MINISPU"
#define extPS2List @"PSF2,MINIPSF2"
#define extX68List @"MDX,PDX"
#define extGBAList @"GSF,MINIGSF"
#define extDCList @"DSF,MINIDSF"
#define extCAPCOMList @"QSF,MINIQSF"
#define extSATList @"SSF,MINISSF"
#define extMIDIList @"MID,MIDI"
#define extPC98List @"M,M2,MZ"
#define extU64List @"USF,MINIUSF"


#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)
