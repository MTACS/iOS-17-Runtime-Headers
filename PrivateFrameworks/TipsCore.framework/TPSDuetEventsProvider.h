
@interface TPSDuetEventsProvider : TPSEventsProvider {
    TPSDuetDataProvider * _duetDataProvider;
}

+ (id)_eventSinceDateForContextualEvent:(id)arg1;
+ (unsigned long long)_limitForDeliveryDuetEvent:(id)arg1;
+ (id)_predicateForDeliveryDuetEvent:(id)arg1 stateResults:(id)arg2;
+ (id)_predicateForDeliveryDuetEventUserInfo:(id)arg1;
+ (bool)_shouldQueryRemoteDevicesForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_deregisterToGetNotifiedWithEvents:(id)arg1;
- (id)_duetRegistrationIDForEvent:(id)arg1;
- (id)_duetWakingRegistrationIDForEvent:(id)arg1;
- (void)_processProviderResults:(id)arg1 forEvent:(id)arg2;
- (void)_queryDuetWithEvent:(id)arg1 limit:(unsigned long long)arg2 stateResults:(id)arg3 completion:(id /* block */)arg4;
- (void)_queryDuetWithEvents:(id)arg1;
- (void)_registerToGetNotifiedWithEvents:(id)arg1 clientIdentifier:(id)arg2;
- (id)_resolveGroupByKeyPathsForEvent:(id)arg1;
- (void)deregisterAllEventsForCallback;
- (void)deregisterEventsForCallback:(id)arg1;
- (id)init;
- (id)initWithDuetDataProvider:(id)arg1;
- (void)queryEvents:(id)arg1;
- (void)registerEventsForCallback:(id)arg1;
- (void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2;

@end
