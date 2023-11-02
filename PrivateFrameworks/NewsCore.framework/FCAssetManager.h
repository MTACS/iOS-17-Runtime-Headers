
@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing> {
    FCMapTable * _assetHandles;
    NFUnfairLock * _assetHandlesLock;
    FCAssetStore * _assetStore;
    <FCAVAssetFactoryType> * _avAssetFactory;
    FCCacheCoordinator * _cacheCoordinator;
    NSURL * _directoryURLForCachedAssets;
    NSObject<OS_dispatch_queue> * _initQueue;
    <FCAssetKeyManagerType> * _keyManager;
    FCKeyValueStore * _keyValueStore;
    NSString * _name;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    NSString * _parentDirectory;
    bool  _shouldUseSecureConnectionForCKAssetDownloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetHandleForCKAssetURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForCKAssetURLString:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForCKAssetURLString:(id)arg1 prefetchedData:(id)arg2 unzipIfNeeded:(bool)arg3 lifetimeHint:(long long)arg4;
- (id)assetHandleForRecordID:(id)arg1 field:(long long)arg2 lifetimeHint:(long long)arg3 contentDatabase:(id)arg4;
- (id)assetHandleForResourceID:(id)arg1 contentContext:(id)arg2;
- (id)assetHandleForResourceID:(id)arg1 lifetimeHint:(long long)arg2 contentContext:(id)arg3;
- (id)assetHandleForURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForURL:(id)arg1 prefetchedFileURL:(id)arg2 importMethod:(long long)arg3 lifetimeHint:(long long)arg4;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)contentArchiveForAssetHandle:(id)arg1;
- (void)d_resetAssetHandle:(id)arg1;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)importAsset:(id)arg1 remoteURL:(id)arg2 fileURL:(id)arg3;
- (id)init;
- (id)initWithName:(id)arg1 directory:(id)arg2 keyManager:(id)arg3 avAssetFactory:(id)arg4 networkBehaviorMonitor:(id)arg5;
- (id)interestTokenForAssetURLs:(id)arg1;
- (id)operationToFetchDataProviderForAssetHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)saveWithCompletionHandler:(id /* block */)arg1;
- (void)t_save;

@end
