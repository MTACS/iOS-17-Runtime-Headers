
@interface APInMemoryTTLCache : NSObject <APPurgeableCacheNotifierP> {
    NSObject<OS_dispatch_source> * _flushCacheTimer;
    NSObject<OS_dispatch_queue> * _flushQueue;
    APUnfairLock * _lock;
    NSCache * _storage;
    double  _timeout;
    NSHashTable * _weakEntryRefs;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *flushCacheTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *flushQueue;
@property (nonatomic, retain) APUnfairLock *lock;
@property (nonatomic, retain) NSCache *storage;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, retain) NSHashTable *weakEntryRefs;

- (void).cxx_destruct;
- (void)_flushCacheStorage;
- (void)_startFlushCacheTimer;
- (void)_stopFlushCacheTimer;
- (bool)_updateMostRecentAccessForIdentifier:(id)arg1;
- (void)dealloc;
- (id)flushCacheTimer;
- (id)flushQueue;
- (id)getObjectForIdentifier:(id)arg1;
- (id)initWithExpirationInterval:(double)arg1 flushQueue:(id)arg2;
- (id)lock;
- (void)recentlyAccessedObject:(id)arg1;
- (void)setFlushCacheTimer:(id)arg1;
- (void)setFlushQueue:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setWeakEntryRefs:(id)arg1;
- (id)storage;
- (double)timeout;
- (id)weakEntryRefs;

@end
