
@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet * _providers;
}

+ (id)unitTesting_cacheDeleteUrgencies;

- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (id)purgeSpace:(int)arg1 info:(id)arg2;
- (id)queryPurgableSpace:(int)arg1 info:(id)arg2;
- (void)registerCacheDeleteProvider:(id)arg1;
- (id)unitTesting_purgeSpace:(int)arg1 info:(id)arg2;
- (id)unitTesting_queryPurgableSpace:(int)arg1 info:(id)arg2;
- (void)unregisterCacheDeleteProvider:(id)arg1;

@end
