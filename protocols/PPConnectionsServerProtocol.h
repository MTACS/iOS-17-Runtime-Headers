
@protocol PPConnectionsServerProtocol <PPFeedbackAccepting>

@required

- (void)recentLocationDonationsSinceDate:(NSDate *)arg1 client:(NSString *)arg2 queryId:(unsigned long long)arg3;
- (void)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(PPConnectionsCriteria *)arg2 limit:(unsigned long long)arg3 explanationSet:(PPQuickTypeExplanationSet *)arg4 client:(NSString *)arg5 queryId:(unsigned long long)arg6;

@end
