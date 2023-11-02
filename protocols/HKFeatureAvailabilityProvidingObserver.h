
@protocol HKFeatureAvailabilityProvidingObserver <NSObject>

@required

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id <HKFeatureAvailabilityProviding>)arg1;

@optional

- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id <HKFeatureAvailabilityProviding>)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id <HKFeatureAvailabilityProviding>)arg1;

@end
