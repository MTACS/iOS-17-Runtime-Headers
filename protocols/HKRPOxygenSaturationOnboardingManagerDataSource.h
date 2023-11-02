
@protocol HKRPOxygenSaturationOnboardingManagerDataSource <NSObject>

@required

- (NSString *)countryCodeFromCurrentLocale;
- (NRDevice *)device;
- (<HKFeatureAvailabilityProviding> *)featureAvailabilityProvider;
- (bool)isAgeGated;
- (bool)isBloodOxygenSaturationEnabled;
- (<HKRegulatoryDomainProvider> *)mobileCountryCodeManager;
- (HKRPOxygenSaturationOnboardingCache *)onboardingCache;
- (HKRPOxygenSaturationSettings *)oxygenSaturationSettings;
- (bool)shouldAdvertise;
- (bool)skipHardwareCheck;

@end
