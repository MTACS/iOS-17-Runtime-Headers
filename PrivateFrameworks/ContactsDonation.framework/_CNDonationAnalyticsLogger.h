
@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger> {
    NSObject<OS_os_log> * _log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)analysisServiceCheckingIn;
- (void)analysisServiceCriteria:(id)arg1;
- (void)didPerformAnalysis;
- (void)didReportAnalytics;
- (void)didSkipDuplicateAnalysis:(id)arg1;
- (id)init;
- (id)log_t;
- (void)noAnalyzerAvailable;
- (void)willReportAnalytics;
- (void)willStartAnalysis;

@end
