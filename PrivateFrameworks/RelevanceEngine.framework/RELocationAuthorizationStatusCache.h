
@interface RELocationAuthorizationStatusCache : RESingleton {
    NSMutableDictionary * _bundleToCallbackBlocks;
    NSMutableDictionary * _bundleToStatusCache;
    NSLock * _bundleToStatusCacheLock;
    NSMutableSet * _bundlesAwaitingQuery;
    NSObject<OS_dispatch_queue> * _queryQueue;
    NSObject<OS_dispatch_queue> * _schedulingQueue;
}

- (void).cxx_destruct;
- (int)_cachedStatusForBundleIdentifier:(id)arg1;
- (id)_init;
- (void)_q_queue_queryStatusFromCLForBundleIdentifier:(id)arg1;
- (void)_s_queue_addCallbackInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_s_queue_scheduleUpdatedStatusForBundleIdentifier:(id)arg1;
- (void)_s_queue_updateCacheFromCLWithStatus:(int)arg1 forBundleIdentifier:(id)arg2;
- (int)cachedAuthorizationStatusForBundleIdentifier:(id)arg1 invalidationUpdateQueue:(id)arg2 withCallback:(id /* block */)arg3;

@end
