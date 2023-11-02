
@interface JetEngine.URLBagContract : NSObject <AMSMetricsBagContract, AMSURLBagContract> {
    void backing;
    void mescalContract;
}

@property (nonatomic, readonly) id TFOSamplingPercentage;
@property (nonatomic, readonly) id TFOSamplingSessionDuration;
@property (nonatomic, readonly) id TLSSamplingPercentage;
@property (nonatomic, readonly) id TLSSamplingSessionDuration;
@property (nonatomic, readonly) id apsEnabledPatterns;
@property (nonatomic, readonly) id apsSamplingPercent;
@property (nonatomic, readonly) id guidRegexes;
@property (nonatomic, readonly) id guidSchemes;
@property (nonatomic, readonly) <AMSMescalBagContract> *mescalContract;
@property (nonatomic, readonly) <AMSMetricsBagContract> *metricsContract;
@property (nonatomic, readonly) id metricsDictionary;
@property (nonatomic, readonly) id metricsURL;
@property (nonatomic, readonly) id storefrontSuffix;
@property (nonatomic, readonly) id trustedDomains;

- (void).cxx_destruct;
- (id)TFOSamplingPercentage;
- (id)TFOSamplingSessionDuration;
- (id)TLSSamplingPercentage;
- (id)TLSSamplingSessionDuration;
- (id)apsEnabledPatterns;
- (id)apsSamplingPercent;
- (id)guidRegexes;
- (id)guidSchemes;
- (id)init;
- (id)mescalContract;
- (id)metricsContract;
- (id)metricsDictionary;
- (id)metricsURL;
- (id)storefrontSuffix;
- (id)trustedDomains;

@end
