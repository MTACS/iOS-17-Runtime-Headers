
@interface FCAVAssetCache : NSObject <FCAVAssetCacheType, FCCacheCoordinatorDelegate, FCCacheFlushing> {
    FCCacheCoordinator * _cacheCoordinator;
    NSString * _cacheDirectory;
    NSURL * _contentDirectoryURL;
    NFUnfairLock * _initializationLock;
    FCKeyValueStore * _metadataStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adoptFileAtURL:(id)arg1 forAssetIdentifier:(id)arg2 remoteURL:(id)arg3 contentKeyIdentifiers:(id)arg4 extension:(id)arg5;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)cachedFileURLForAssetIdentifier:(id)arg1;
- (bool)containsAssetWithIdentifier:(id)arg1;
- (id)contentArchiveForAssetIdentifier:(id)arg1;
- (id)contentKeyIdentifiersForAllAssets;
- (id)contentKeyIdentifiersForAssetIdentifier:(id)arg1;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)importAVAsset:(id)arg1;
- (id)init;
- (id)interestTokenForAssetIdentifier:(id)arg1;
- (id)interestTokenForAssetIdentifiers:(id)arg1;

@end
