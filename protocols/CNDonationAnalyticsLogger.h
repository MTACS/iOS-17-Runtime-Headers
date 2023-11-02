
@protocol CNDonationAnalyticsLogger <NSObject>

@required

- (void)analysisServiceCheckingIn;
- (void)analysisServiceCriteria:(NSObject<OS_xpc_object> *)arg1;
- (void)didPerformAnalysis;
- (void)didReportAnalytics;
- (void)didSkipDuplicateAnalysis:(NSDate *)arg1;
- (void)noAnalyzerAvailable;
- (void)willReportAnalytics;
- (void)willStartAnalysis;

@end
