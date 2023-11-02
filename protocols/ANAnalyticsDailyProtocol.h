
@protocol ANAnalyticsDailyProtocol <ANAnalyticsDailyTrackingProtocol>

@required

- (<ANAnalyticsDailyDelegate> *)delegate;
- (void)recordReachableHomes:(ANAnalyticsCounter *)arg1;
- (void)setDelegate:(id <ANAnalyticsDailyDelegate>)arg1;
- (void)start;

@end
