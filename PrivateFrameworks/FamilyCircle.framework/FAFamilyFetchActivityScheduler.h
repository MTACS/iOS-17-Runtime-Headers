
@interface FAFamilyFetchActivityScheduler : NSObject {
    void $__lazy_storage_$_activityProvider;
    void activity;
    void cacheLoadBlock;
    void familyCircleFetchBlock;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFamilyCircleFetchBlock:(id /* block */)arg1 cacheLoadBlock:(id /* block */)arg2;
- (void)reschedule;

@end
