
@interface CSOnDeviceCompilationHandler : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedHandler;

- (void).cxx_destruct;
- (id)_compileModelAndAddToCacheWithConfigFiles:(id)arg1 compileDirectoryPath:(id)arg2 locale:(id)arg3 assetVersion:(id)arg4 hashToUse:(id)arg5;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)arg1 assetType:(unsigned long long)arg2 deviceId:(id)arg3 currentLocale:(id)arg4 compileDirectory:(id)arg5 errOut:(id*)arg6;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)arg1 assetType:(unsigned long long)arg2 endpointId:(id)arg3 errOut:(id*)arg4;
- (void)compileUsingConfig:(id)arg1 locale:(id)arg2 compileDirectory:(id)arg3 errOut:(id*)arg4;
- (id)init;

@end
