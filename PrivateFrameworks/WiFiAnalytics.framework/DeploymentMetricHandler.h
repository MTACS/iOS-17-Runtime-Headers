
@interface DeploymentMetricHandler : NSObject {
    bool  _isInternalInstall;
    AnalyticsStoreMOHandler * _storeMOHandler;
}

@property (nonatomic) bool isInternalInstall;
@property (nonatomic, retain) AnalyticsStoreMOHandler *storeMOHandler;

- (void).cxx_destruct;
- (bool)appendBssAnalyticsToMetric:(id)arg1 bssMo:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (void)appendJoinsSummaryToMetric:(id)arg1 ssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (bool)appendNetworkAnalyticsToMetric:(id)arg1 ssid:(id)arg2 deploymentUuid:(id)arg3 maxAgeInDays:(unsigned long long)arg4;
- (id)initWithAnalyticsStore:(id)arg1;
- (bool)isInternalInstall;
- (id)leavesSummary:(id)arg1 bssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (bool)metricNeedsSubmission:(id)arg1 deploymentUuid:(id)arg2 interval:(unsigned long long)arg3;
- (void)networkDeploymentMetricCheckAndSubmit:(id)arg1 deploymentUuid:(id)arg2 interval:(unsigned long long)arg3;
- (id)roamsSummary:(id)arg1 bssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setStoreMOHandler:(id)arg1;
- (id)storeMOHandler;
- (void)submitBssAnalyticsMetrics:(id)arg1 deploymentUuid:(id)arg2 stitchIndex:(long long)arg3;

@end
