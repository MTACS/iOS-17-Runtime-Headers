
@interface MRUAssetManager : NSObject {
    SFDeviceAssetManager * _assetManager;
    NSMutableDictionary * _bundles;
    NSMutableDictionary * _completions;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_imageForModelIdentifier:(id)arg1 color:(id)arg2;
- (void)activateAssetManager;
- (id)assetRequestConfigurationForModelIdentifier:(id)arg1 color:(id)arg2;
- (void)beginRequestForModelIdentifier:(id)arg1 color:(id)arg2 completion:(id /* block */)arg3;
- (void)cacheBundle:(id)arg1 forModelIdentifier:(id)arg2 color:(id)arg3;
- (id)cachedBundleForModelIdentifier:(id)arg1 color:(id)arg2;
- (id)currentInterfaceStyleImageName;
- (void)endRequestsForModelIdentifier:(id)arg1 color:(id)arg2 error:(id)arg3;
- (void)handleDownloadCompletion:(id)arg1 modelIdentifier:(id)arg2 color:(id)arg3 error:(id)arg4;
- (void)handleQueryResult:(id)arg1 modelIdentifier:(id)arg2 color:(id)arg3 productType:(id)arg4 isFallback:(bool)arg5 error:(id)arg6;
- (id)imageForEndpointRoute:(id)arg1;
- (void)imageForEndpointRoute:(id)arg1 completion:(id /* block */)arg2;
- (id)imageForModelIdentifier:(id)arg1 color:(id)arg2;
- (void)imageForModelIdentifier:(id)arg1 color:(id)arg2 completion:(id /* block */)arg3;
- (id)imageForOutputDevice:(id)arg1;
- (void)imageForOutputDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)requestBundleForModelIdentifier:(id)arg1 color:(id)arg2;
- (id)resizeImage:(id)arg1 size:(double)arg2;

@end
