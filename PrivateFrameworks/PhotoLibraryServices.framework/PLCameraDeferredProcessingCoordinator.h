
@interface PLCameraDeferredProcessingCoordinator : NSObject {
    PLAssetsdClient * _assetsdClient;
}

@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;

- (void).cxx_destruct;
- (bool)cancelAllPrewarming:(id*)arg1;
- (void)cancelAllPrewarmingWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithAssetdClient:(id)arg1;
- (void)prewarmWithPhotoSettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)prewarmWithPhotoSettings:(id)arg1 error:(id*)arg2;
- (id)resourceInternalClient;

@end
