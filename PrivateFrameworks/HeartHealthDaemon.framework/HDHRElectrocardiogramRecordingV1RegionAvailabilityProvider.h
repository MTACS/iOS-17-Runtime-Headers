
@interface HDHRElectrocardiogramRecordingV1RegionAvailabilityProvider : NSObject <HDObservableRegionAvailabilityProviding> {
    <HDObservableRegionAvailabilityProviding> * _backingProvider;
    <HDPairedDeviceCapabilityProviding> * _capabilityProvider;
    <HDRegionAvailabilityProvidingDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDRegionAvailabilityProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithRegionAvailabilityProvider:(id)arg1 pairedDeviceCapabilityProvider:(id)arg2;
- (id)onboardingEligibilityForCountryCode:(id)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1 device:(id)arg2;
- (id)regionAvailability;
- (id)regionAvailabilityForDevice:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
