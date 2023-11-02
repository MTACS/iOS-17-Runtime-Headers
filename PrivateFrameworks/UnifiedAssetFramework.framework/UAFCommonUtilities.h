
@interface UAFCommonUtilities : NSObject

+ (id)_eliminateAutoAssetType:(id)arg1;
+ (id)_getAssetTypeFromConfig;
+ (id)_getInternalBaseConfigDir;
+ (id)_getInternalConfigFilePath;
+ (bool)_resetAutoAssetTypes:(id)arg1;
+ (long long)_setPallasAudience:(id)arg1 forType:(id)arg2;
+ (long long)_setPallasURL:(id)arg1 forType:(id)arg2;
+ (bool)_setUAFPopulation:(id)arg1 forAssetTypes:(id)arg2;
+ (id)bundle;
+ (id)currentAssistantLanguage;
+ (bool)deviceSupportAndUseHybridASR;
+ (bool)deviceSupportFullUOD;
+ (id)getFreeDiskSpaceInBytes;
+ (unsigned long long)getFreeDiskSpaceNeededForDownloadSizeInBytes:(unsigned long long)arg1;
+ (struct passwd { char *x1; char *x2; unsigned int x3; unsigned int x4; long long x5; char *x6; char *x7; char *x8; char *x9; long long x10; }*)getPWUID:(id)arg1;
+ (void)getUID:(unsigned int*)arg1 andEUID:(unsigned int*)arg2;
+ (bool)isFullUODSupportedForStatus:(id)arg1 language:(id)arg2;
+ (bool)isHybridUODSupportedForStatus:(id)arg1 language:(id)arg2;
+ (bool)isInternalInstall;
+ (bool)isTop13Locale:(id)arg1;
+ (bool)resetAutoAssets;
+ (id)rootDirectory;
+ (bool)setEPRIfNeeded;
+ (bool)setUAFPopulation:(id)arg1;
+ (id)simulatorResourcesDirectory;
+ (int)stat:(id)arg1 withBuf:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg2;
+ (id)valueForEntitlement:(id)arg1;

@end
