
@interface TPSBiomeEventsProvider : TPSEventsProvider

+ (id)_eventSinceDateForContextualEvent:(id)arg1;
+ (unsigned long long)_limitForContextualBiomeEvent:(id)arg1;

- (void)_processProviderResults:(id)arg1 bookmark:(id)arg2 forEvent:(id)arg3;
- (void)deregisterEventsForCallback:(id)arg1;
- (void)queryEvents:(id)arg1;
- (void)registerEventsForCallback:(id)arg1;
- (void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2;

@end
