
@protocol ATXUpdatePredictionsDelegate

@required

- (void)forceUpdatePredictionsImmediatelyWithReason:(unsigned long long)arg1;
- (void)tryUpdatePredictionsDefaultIntervalWithReason:(unsigned long long)arg1;
- (void)tryUpdatePredictionsImmediatelyWithReason:(unsigned long long)arg1;

@end
