
@interface CSOnDeviceCompilationUtils : NSObject

+ (id)_getBaseNamingWithHashToUse:(id)arg1 milName:(id)arg2 configVersion:(id)arg3;
+ (long long)getBackendTypeFromModelFile:(id)arg1;
+ (id)getCachedIrForPurgingWithMilName:(id)arg1 configVersion:(id)arg2 hashToUse:(id)arg3 compileDir:(id)arg4;
+ (id)getCachedIrsFromCSAsset:(id)arg1 cachedIrDir:(id)arg2;
+ (id)getIrNameFromModelNameForCompile:(id)arg1 locale:(id)arg2 assetVersion:(id)arg3 hashToUse:(id)arg4;
+ (id)getMilConfigFromMilFilePath:(id)arg1;
+ (id)getModelNameFromMilFilePath:(id)arg1;
+ (bool)isBnnsIrNameForCurrentBuild:(id)arg1;
+ (id)readMilFilePathFromConfig:(id)arg1;
+ (id)sortCachedIrsByLastAccessTimeStamp:(id)arg1;

@end
