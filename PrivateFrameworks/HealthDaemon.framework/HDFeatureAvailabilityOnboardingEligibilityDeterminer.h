
@interface HDFeatureAvailabilityOnboardingEligibilityDeterminer : NSObject {
    long long  _currentOnboardingVersion;
    <HDFeatureDisableAndExpiryProviding> * _disableAndExpiryProvider;
    NSString * _featureIdentifier;
    NSObject<OS_os_log> * _loggingCategory;
    NSUUID * _pairedDeviceCapability;
    <HDPairedDeviceCapabilityProviding> * _pairedDeviceCapabilityProvider;
    <HDPairedFeatureAttributesProviding> * _pairedFeatureAttributesProvider;
    <HDRegionAvailabilityProviding> * _regionAvailabilityProvider;
}

@property (nonatomic) long long currentOnboardingVersion;

- (void).cxx_destruct;
- (bool)_isActiveRemoteDevicePresent;
- (id)_onboardingEligibilitiesForOnboardingCompletions:(id)arg1 onboardingEligibilityRetrievalBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)_onboardingEligibilityForRegionEligibility:(id)arg1 rescindedStatus:(id)arg2 isCapabilitySupported:(id)arg3 isActiveRemoteDevicePresent:(id)arg4;
- (long long)currentOnboardingVersion;
- (id)description;
- (id)initWithFeatureIdentifier:(id)arg1 currentOnboardingVersion:(long long)arg2 pairedDeviceCapability:(id)arg3 pairedDeviceCapabilityProvider:(id)arg4 regionAvailabilityProvider:(id)arg5 disableAndExpiryProvider:(id)arg6 loggingCategory:(id)arg7;
- (id)onboardingEligibilitiesForDevice:(id)arg1 onboardingCompletions:(id)arg2 error:(id*)arg3;
- (id)onboardingEligibilitiesForOnboardingCompletions:(id)arg1 error:(id*)arg2;
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id*)arg2;
- (id)onboardingEligibilityForDevice:(id)arg1 countryCode:(id)arg2 error:(id*)arg3;
- (void)setCurrentOnboardingVersion:(long long)arg1;

@end
