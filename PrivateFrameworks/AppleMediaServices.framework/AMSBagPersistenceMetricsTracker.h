
@interface AMSBagPersistenceMetricsTracker : NSObject {
    void eventSender;
    void initialState;
}

+ (void)trackCachedValuesUnavailableWithRequestedValueCount:(long long)arg1;
+ (id)trackerForCachedValuesCallWithRequestedValueCount:(long long)arg1 cachedValueCount:(long long)arg2 cachedBagWasExpired:(bool)arg3;

- (void).cxx_destruct;
- (id)init;

@end
