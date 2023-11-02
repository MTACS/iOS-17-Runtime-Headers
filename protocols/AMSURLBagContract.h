
@protocol AMSURLBagContract <NSObject>

@optional

- (AMSBagValue *)TFOSamplingPercentage;
- (AMSBagValue *)TFOSamplingSessionDuration;
- (AMSBagValue *)TLSSamplingPercentage;
- (AMSBagValue *)TLSSamplingSessionDuration;
- (AMSBagValue *)apsAllowedProductTypes;
- (AMSBagValue *)apsEnabledPatterns;
- (AMSBagValue *)apsSamplingPercent;
- (AMSBagValue *)guidRegexes;
- (AMSBagValue *)guidSchemes;
- (<AMSMescalBagContract> *)mescalContract;
- (<AMSMetricsBagContract> *)metricsContract;
- (AMSBagValue *)metricsURL;
- (AMSBagValue *)storefrontSuffix;
- (AMSBagValue *)trustedDomains;

@end
