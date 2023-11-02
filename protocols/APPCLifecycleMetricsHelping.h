
@protocol APPCLifecycleMetricsHelping

@required

- (void)contentLoadFailure;
- (void)discarded;
- (void)manuallyDiscardWithReason:(long long)arg1;
- (void)missedOpportunity;
- (void)trackImpressionWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;

@end
