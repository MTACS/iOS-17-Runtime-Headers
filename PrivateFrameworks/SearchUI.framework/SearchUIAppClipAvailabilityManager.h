
@interface SearchUIAppClipAvailabilityManager : NSObject <SearchUIBatchedCachePrewarmer> {
    NSCache * _cache;
    NSCache * _possiblyAvailableCache;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (retain) NSCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSCache *possiblyAvailableCache;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)batchingItemsForRowModel:(id)arg1;
- (id)cache;
- (id)cachedAvailabilityForCommand:(id)arg1;
- (void)checkIfClipsAreValid:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)possiblyAvailableCache;
- (void)prewarmCacheForBatchedItems:(id)arg1;
- (void)requestAvailabilityForCommand:(id)arg1 completion:(id /* block */)arg2;
- (id)serialQueue;
- (void)setCache:(id)arg1;
- (void)setPossiblyAvailableCache:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
