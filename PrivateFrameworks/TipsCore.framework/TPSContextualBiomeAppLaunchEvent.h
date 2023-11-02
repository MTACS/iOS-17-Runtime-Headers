
@interface TPSContextualBiomeAppLaunchEvent : TPSContextualBiomeEvent

+ (id)observationDateFromEvent:(id)arg1;

- (id)_filteringPredicate;
- (id /* block */)filterHandler;
- (id)publisherFromStartTime:(double)arg1;

@end
