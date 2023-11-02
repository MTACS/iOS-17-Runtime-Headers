
@interface VTUtilities : NSObject

+ (bool)VTIsHorseman;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1;
+ (double)_round:(double)arg1 withPlaces:(int)arg2;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (id)deviceSoftwareVersion;
+ (void)forceReload;
+ (id)getAssetHashFromConfigPath:(id)arg1;
+ (unsigned long long)horsemanDeviceType;
+ (bool)isAlwaysOn;
+ (bool)isIOS;
+ (bool)isInternalInstall;
+ (bool)isNano;
+ (bool)isNonUI;
+ (bool)isTorpedo;
+ (id)sanitizeEventInfoForLogging:(id)arg1;
+ (bool)supportBargeIn;
+ (bool)supportExternalPhraseSpotter;
+ (bool)supportPremiumAssets;
+ (bool)supportRemoteDarwinVoiceTrigger;
+ (bool)supportTTS;
+ (double)systemUpTime;

@end
