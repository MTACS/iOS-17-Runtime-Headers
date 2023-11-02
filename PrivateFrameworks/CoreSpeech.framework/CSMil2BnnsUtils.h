
@interface CSMil2BnnsUtils : NSObject

+ (void)_changePermissionOfBnnsIr:(id)arg1;
+ (void)_compileWithExceptionHandlingUsingModelFilePath:(id)arg1 bnnsIrPath:(id)arg2 milConfigPath:(id)arg3 error:(id*)arg4;
+ (id)compileModelWithMilFile:(id)arg1 bnnsIrCachePath:(id)arg2;
+ (void*)mmapModelWithConfig:(id)arg1 mappedSizeOut:(id*)arg2;
+ (id)readBnnsIrFromCacheMapWithMilFile:(id)arg1;
+ (void)removeBnnsIrFromCacheMapWithMilFile:(id)arg1;
+ (void)removeConfigFromQuasarComputeEngineCacheWithMilBnnsPath:(id)arg1 bnnsIrPath:(id)arg2;
+ (void)setBnnsIrForCacheMap:(id)arg1 withMilFile:(id)arg2;

@end
