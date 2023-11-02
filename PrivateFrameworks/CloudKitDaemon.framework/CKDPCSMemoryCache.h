
@interface CKDPCSMemoryCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cacheEntries;
    unsigned long long  _maxEntries;
    unsigned long long  _memoryCacheDeleteCount;
    unsigned long long  _memoryCacheEvictCount;
    unsigned long long  _memoryCacheHighwaterCount;
    unsigned long long  _memoryCacheHitCount;
    unsigned long long  _memoryCacheRequestCount;
    unsigned long long  _memoryCacheUpdateCount;
    double  _minAge;
    double  _oldestCacheEntry;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMutableDictionary *cacheEntries;
@property (nonatomic) unsigned long long maxEntries;
@property unsigned long long memoryCacheDeleteCount;
@property unsigned long long memoryCacheEvictCount;
@property unsigned long long memoryCacheHighwaterCount;
@property unsigned long long memoryCacheHitCount;
@property unsigned long long memoryCacheRequestCount;
@property unsigned long long memoryCacheUpdateCount;
@property (nonatomic) double minAge;
@property double oldestCacheEntry;

+ (void)initialize;
+ (void)registerEvictionTimer;
+ (void)runMemoryCacheEvictionInAllCaches;
+ (void)setupMemoryNotifications;
+ (void)startEvictionTimer;
+ (void)stopEvictionTimer;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (unsigned long long)_cacheCount;
- (void)_lockedEvictEntriesFromCache;
- (id)accessQueue;
- (id)cacheEntries;
- (void)clearCache;
- (void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)hasStatusToReport;
- (id)init;
- (unsigned long long)maxEntries;
- (unsigned long long)memoryCacheDeleteCount;
- (unsigned long long)memoryCacheEvictCount;
- (unsigned long long)memoryCacheHighwaterCount;
- (unsigned long long)memoryCacheHitCount;
- (unsigned long long)memoryCacheRequestCount;
- (unsigned long long)memoryCacheUpdateCount;
- (double)minAge;
- (double)oldestCacheEntry;
- (void)runCacheEviction;
- (void)setAccessQueue:(id)arg1;
- (void)setCacheEntries:(id)arg1;
- (void)setMaxEntries:(unsigned long long)arg1;
- (void)setMemoryCacheDeleteCount:(unsigned long long)arg1;
- (void)setMemoryCacheEvictCount:(unsigned long long)arg1;
- (void)setMemoryCacheHighwaterCount:(unsigned long long)arg1;
- (void)setMemoryCacheHitCount:(unsigned long long)arg1;
- (void)setMemoryCacheRequestCount:(unsigned long long)arg1;
- (void)setMemoryCacheUpdateCount:(unsigned long long)arg1;
- (void)setMinAge:(double)arg1;
- (void)setOldestCacheEntry:(double)arg1;
- (void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;

@end
