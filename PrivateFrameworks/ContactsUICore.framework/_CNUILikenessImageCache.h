
@interface _CNUILikenessImageCache : NSObject {
    CNCache * _cache;
    CNQueue * _evictionQueue;
    CNUnfairLock * _lock;
    NSObject<OS_dispatch_source> * _memoryMonitoringSource;
}

@property (nonatomic, retain) CNCache *cache;
@property (nonatomic, retain) CNQueue *evictionQueue;
@property (nonatomic, retain) CNUnfairLock *lock;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryMonitoringSource;

- (void).cxx_destruct;
- (id)cache;
- (void)emptyCache:(id)arg1;
- (id)evictionQueue;
- (id)initWithCapacity:(unsigned long long)arg1 hasContactStore:(bool)arg2;
- (void)invalidateCacheEntriesContainingIdentifiers:(id)arg1;
- (id)lock;
- (id)memoryMonitoringSource;
- (void)refreshCacheKey:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setEvictionQueue:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setMemoryMonitoringSource:(id)arg1;

@end
