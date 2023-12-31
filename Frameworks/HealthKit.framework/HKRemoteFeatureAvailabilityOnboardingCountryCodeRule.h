
@interface HKRemoteFeatureAvailabilityOnboardingCountryCodeRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    NSString * _onboardingCountryCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *onboardingCountryCode;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (bool)evaluate;
- (id)onboardingCountryCode;
- (void)processUserInfo:(id)arg1;
- (void)setOnboardingCountryCode:(id)arg1;

@end
