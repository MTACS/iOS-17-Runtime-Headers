
@interface APPCLifecycleMetricsHelper : NSObject <APPCLifecycleMetricsHelping> {
    void metricsHelper;
    void placeholder;
    void wasOnScreen;
}

- (void).cxx_destruct;
- (void)contentLoadFailure;
- (void)discarded;
- (id)init;
- (void)manuallyDiscardWithReason:(long long)arg1;
- (void)missedOpportunity;
- (void)trackImpressionWithStartDate:(id)arg1 endDate:(id)arg2;

@end
