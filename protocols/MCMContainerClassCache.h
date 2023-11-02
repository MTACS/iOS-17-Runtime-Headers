
@protocol MCMContainerClassCache <NSObject>

@required

- (void)asyncStartSynchronization;
- (<MCMContainerCacheEntry> *)cacheEntryForIdentifier:(NSString *)arg1;
- (id /* block */)concurrentWriteThroughHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, NSString *, <MCMContainerCacheEntry> *, <MCMContainerCacheEntry> *, void*, id, SEL
- (MCMContainerClassPath *)containerClassPath;
- (bool)enumerateCacheEntriesWithEnumerator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <MCMContainerCacheEntry> *, void*
- (void)flush;
- (void)forceWriteThrough;
- (id)initWithContainerClassPath:(MCMContainerClassPath *)arg1 cacheEntryClass:(Class)arg2 targetQueue:(NSObject<OS_dispatch_queue> *)arg3 userIdentityCache:(MCMUserIdentityCache *)arg4;
- (NSUUID *)lastCompletedDiskScanUUID;
- (bool)resyncRequired;
- (<MCMContainerCacheEntry> *)setCacheEntry:(id <MCMContainerCacheEntry>)arg1 forIdentifier:(NSString *)arg2;
- (<MCMContainerCacheEntry> *)setCacheEntry:(id <MCMContainerCacheEntry>)arg1 forIdentifier:(NSString *)arg2 writeThrough:(bool)arg3;
- (void)setConcurrentWriteThroughHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, <MCMContainerCacheEntry> *, <MCMContainerCacheEntry> *, void*
- (void)setLastCompletedDiskScanUUID:(NSUUID *)arg1;
- (void)setResyncRequired:(bool)arg1;
- (void)setTargetDiskScanUUID:(NSUUID *)arg1;
- (NSUUID *)targetDiskScanUUID;
- (void)waitForSynchronizationToComplete;

@end
