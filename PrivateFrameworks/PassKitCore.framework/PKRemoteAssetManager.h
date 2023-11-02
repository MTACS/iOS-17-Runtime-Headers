
@interface PKRemoteAssetManager : NSObject {
    NSMutableArray * _completionHandlers;
    PKDirectoryCoordinator * _coordinator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _manifestItemsByRelativeURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _seids;
    NSMutableDictionary * _sha1HexFromRelativeManifest;
}

@property (nonatomic, copy) NSArray *seids;

- (void).cxx_destruct;
- (void)_callCompletionHandlersWithFinishState:(bool)arg1 progress:(float)arg2 error:(id)arg3;
- (void)_downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 shouldWriteData:(bool)arg3 completion:(id /* block */)arg4;
- (void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 requireRequiredAssets:(bool)arg4 completion:(id /* block */)arg5;
- (void)_flushBundleCaches;
- (bool)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3;
- (bool)addRemoteAssetData:(id)arg1 shouldWriteData:(bool)arg2 forManifestItem:(id)arg3 error:(id*)arg4;
- (bool)assetExistsLocally:(id)arg1;
- (id)deviceSpecificItems;
- (id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (void)downloadRemoteAssetItem:(id)arg1 withCloudStoreCoordinatorDelegate:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 ignoreRequiredAssetDownloadFailures:(bool)arg4 completion:(id /* block */)arg5;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasEncryptedDeviceSpecificItemWithRelativePath:(id)arg1;
- (id)init;
- (id)initWithDirectoryCoordinator:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)itemWithRelativePath:(id)arg1;
- (id)pendingRemoteAssetsItems;
- (id)pendingRemoteAssetsItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)remoteAssetManifests;
- (id)seids;
- (void)setSeids:(id)arg1;
- (id)sha1HexFromRelativeManifestWithRelativePath:(id)arg1;

@end
