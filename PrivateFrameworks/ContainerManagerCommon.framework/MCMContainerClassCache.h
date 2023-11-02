
@interface MCMContainerClassCache : NSObject <MCMContainerCacheUpdatable, MCMContainerClassCache> {
    Class  _cacheEntryClass;
    id /* block */  _concurrentWriteThroughHandler;
    unsigned long long  _containerClass;
    MCMContainerClassPath * _containerClassPath;
    NSObject<OS_dispatch_queue> * _fsScanQueue;
    NSUUID * _lastCompletedDiskScanUUID;
    NSMutableDictionary * _lock_cache;
    bool  _resyncRequired;
    NSUUID * _targetDiskScanUUID;
    MCMUserIdentityCache * _userIdentityCache;
    bool  _writeThroughEnabled;
}

@property (nonatomic, readonly) Class cacheEntryClass;
@property (nonatomic, copy) id /* block */ concurrentWriteThroughHandler;
@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) MCMContainerClassPath *containerClassPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *fsScanQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *lastCompletedDiskScanUUID;
@property (nonatomic, readonly) NSMutableDictionary *lock_cache;
@property (nonatomic) bool resyncRequired;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *targetDiskScanUUID;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;
@property (nonatomic) bool writeThroughEnabled;

- (void).cxx_destruct;
- (bool)_checkExistanceOfCacheEntry:(id)arg1 libraryRepair:(id)arg2;
- (id)_concurrent_generateCacheEntryWithURL:(id)arg1 identifier:(id)arg2 containerPath:(id)arg3 schemaVersion:(id)arg4 uuid:(id)arg5 metadata:(id)arg6;
- (void)_concurrent_processCorruptEntry:(id)arg1 handler:(id /* block */)arg2;
- (void)_concurrent_processURL:(id)arg1 handler:(id /* block */)arg2;
- (id)_concurrent_slowGenerateCacheEntryWithFileHandle:(id)arg1 URL:(id)arg2 identifier:(id)arg3 uuid:(id)arg4 schemaVersion:(id)arg5 containerPath:(id)arg6;
- (void)_handleUnrecoverableCorruptContainerPath:(id)arg1;
- (void)_processCorruptEntries:(id)arg1 handler:(id /* block */)arg2;
- (void)_processURLs:(id)arg1 handler:(id /* block */)arg2;
- (void)_queue_syncWithDisk;
- (id)_setEntry:(id)arg1 forIdentifier:(id)arg2 writeThrough:(bool)arg3;
- (void)asyncStartSynchronization;
- (Class)cacheEntryClass;
- (id)cacheEntryForIdentifier:(id)arg1;
- (id /* block */)concurrentWriteThroughHandler;
- (unsigned long long)containerClass;
- (id)containerClassPath;
- (bool)enumerateCacheEntriesWithEnumerator:(id /* block */)arg1;
- (void)flush;
- (void)forceWriteThrough;
- (id)fsScanQueue;
- (id)initWithContainerClassPath:(id)arg1 cacheEntryClass:(Class)arg2 targetQueue:(id)arg3 userIdentityCache:(id)arg4;
- (id)lastCompletedDiskScanUUID;
- (id)lock_cache;
- (bool)resyncRequired;
- (id)setCacheEntry:(id)arg1 forIdentifier:(id)arg2;
- (id)setCacheEntry:(id)arg1 forIdentifier:(id)arg2 writeThrough:(bool)arg3;
- (void)setConcurrentWriteThroughHandler:(id /* block */)arg1;
- (void)setLastCompletedDiskScanUUID:(id)arg1;
- (void)setResyncRequired:(bool)arg1;
- (void)setTargetDiskScanUUID:(id)arg1;
- (void)setWriteThroughEnabled:(bool)arg1;
- (id)targetDiskScanUUID;
- (id)userIdentityCache;
- (void)waitForSynchronizationToComplete;
- (bool)writeThroughEnabled;

@end
