
@interface HDRegionAvailabilityProvider : NSObject <HDRegionAvailabilityProviding> {
    HKRegionAvailability * _regionAvailability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)anyCountryAvailability;
+ (id)uncheckedAvailability;

- (void).cxx_destruct;
- (id)onboardingEligibilityForCountryCode:(id)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1 device:(id)arg2;
- (id)regionAvailability;
- (id)regionAvailabilityForDevice:(id)arg1;

@end
