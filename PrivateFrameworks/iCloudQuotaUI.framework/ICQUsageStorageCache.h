
@interface ICQUsageStorageCache : NSObject {
    NSMutableArray * _appsCache;
    bool  _cacheUpdateCancelled;
    NSObject<OS_dispatch_queue> * _cache_operation_queue;
    NSMutableDictionary * _mediaCache;
    NSArray * _usageBundlesCache;
    PSUsageBundleManager * _usageBundlesManager;
}

- (void).cxx_destruct;
- (void)cancelUsageDataPopulation;
- (id)checkAndFixUpVersion:(id)arg1;
- (id)init;
- (id)mediaCollectionForKey:(id)arg1;
- (void)populateMediaCache;
- (void)populateUsageAppsCacheWithHandler:(id /* block */)arg1;
- (void)populateUsageBundlesCacheWithHandler:(id /* block */)arg1;
- (void)populateUsageDataWithProgressBlock:(id /* block */)arg1;
- (void)removeMediaCollectionCacheForKey:(id)arg1;
- (float)sizeForMediaQuery:(id)arg1 withGroupingType:(long long)arg2 storingInCache:(id)arg3 withKey:(id)arg4;
- (float)specialStorageUsageForBundleID:(id)arg1;

@end
