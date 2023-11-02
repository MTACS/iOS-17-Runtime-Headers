
@protocol ACActivityFrequentUpdatesObservationXPCClient

@required

- (oneway void)activityDidExceedReducedPushBudgetForIdentifier:(NSString *)arg1;
- (oneway void)activityDidUnsubscribeForIdentifier:(NSString *)arg1;

@end
