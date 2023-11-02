
@interface UARPDeploymentRuleConfig : NSObject {
    NSArray * _countryList;
    NSNumber * _deploymentLimit;
    NSDate * _goLiveDate;
    NSNumber * _rampPeriod;
}

@property (copy) NSArray *countryList;
@property (copy) NSNumber *deploymentLimit;
@property (copy) NSDate *goLiveDate;
@property (copy) NSNumber *rampPeriod;

- (void).cxx_destruct;
- (id)countryList;
- (id)deploymentLimit;
- (id)goLiveDate;
- (id)rampPeriod;
- (void)setCountryList:(id)arg1;
- (void)setDeploymentLimit:(id)arg1;
- (void)setGoLiveDate:(id)arg1;
- (void)setRampPeriod:(id)arg1;

@end
