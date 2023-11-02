
@interface NDAnalyticsEnvelopeStore : NSObject <FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore> {
    FCAssetStore * _assetStore;
    FCCacheCoordinator * _cacheCoordinator;
    <NDAnalyticsEnvelopeStoreObserver> * _observer;
}

@property (nonatomic, retain) FCAssetStore *assetStore;
@property (nonatomic, retain) FCCacheCoordinator *cacheCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NDAnalyticsEnvelopeStoreObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteEnvelopesForKeysFromStore:(id)arg1;
- (void)_reportEnvelopesToNewsAutomationIfNeeded:(id)arg1;
- (id)allEntriesWithHoldToken:(id*)arg1;
- (id)assetStore;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (void)copyEnvelopes:(id)arg1;
- (void)deleteEnvelopesForEntries:(id)arg1;
- (void)enableFlushing;
- (id)envelopesForEntries:(id)arg1;
- (id)init;
- (id)initWithStoreDirectoryFileURL:(id)arg1;
- (id)observer;
- (void)setAssetStore:(id)arg1;
- (void)setCacheCoordinator:(id)arg1;
- (void)setObserver:(id)arg1;
- (id)sizesOfEnvelopesWithEntries:(id)arg1;

@end
