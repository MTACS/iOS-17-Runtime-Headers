
@interface CDMUserDefaultsUtils : NSObject

+ (id)getDefaultCustomAssetsRootPath;
+ (id)getDefaultCustomLogPath;
+ (bool)isInsertEmbeddingOutputsToFeatureStoreEnabled;
+ (bool)isSSURequestTimeoutDisabled;
+ (bool)isSkipNodeEnabled;
+ (bool)isTapToRadarDisabled;
+ (bool)isWriteDebugToDiskEnabled;
+ (bool)prewarmModels;
+ (unsigned int)readAsrAlternativeCount:(id)arg1;
+ (id)readCustomAssetsRootPath;
+ (id)readCustomLogPath;
+ (unsigned int)readGraphRunnerMaxConcurrentCount;
+ (unsigned long long)readNLv4MaxNumParses;
+ (unsigned int)readNonSiriSelfSampleRate;
+ (id)readUaaPNLAppModelPaths;
+ (id)readUaaPNLCoreModelPath;
+ (unsigned long long)readUaaPNLMaxNumParses;
+ (id)readUaaPNLSystemConfigPath;
+ (id)readUserDefaultLVCOverride;
+ (id)readUserDefaultPscOverride;
+ (id)readUserDefaultSnlcOverride;
+ (unsigned long long)readUserDefaultsValueForKeyUint64:(id)arg1 defaultValue:(long long)arg2;
+ (unsigned int)readXPCCallbackDefaultTimeout;

@end
