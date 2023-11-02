
@protocol HDRegionAvailabilityProviding <NSObject>

@required

- (HKFeatureAvailabilityOnboardingEligibility *)onboardingEligibilityForCountryCode:(NSString *)arg1;
- (HKFeatureAvailabilityOnboardingEligibility *)onboardingEligibilityForCountryCode:(NSString *)arg1 device:(NRDevice *)arg2;
- (HKRegionAvailability *)regionAvailability;
- (HKRegionAvailability *)regionAvailabilityForDevice:(NRDevice *)arg1;

@end
