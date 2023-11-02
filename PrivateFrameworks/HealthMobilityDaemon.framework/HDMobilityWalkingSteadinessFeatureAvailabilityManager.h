
@interface HDMobilityWalkingSteadinessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDMobilityRegionSupportedDeterminer> {
    long long  __unitTest_currentOnboardingVersionOverride;
    long long  _currentOnboardingVersion;
    HDFeatureAvailabilityManager * _manager;
    HDProfile * _profile;
    <HDRegionAvailabilityProviding> * _supportedRegionProvider;
}

@property (nonatomic) long long _unitTest_currentOnboardingVersionOverride;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;

- (void).cxx_destruct;
- (long long)_currentOnboardingVersion;
- (bool)_determineIsSupportedWithOnboardingCompletions:(id)arg1 regionCheckBlock:(id /* block */)arg2;
- (bool)_localRegionCheckWithCountryCode:(id)arg1;
- (id)_onboardedCountryCodeSupportedStateWithError:(id*)arg1;
- (id)_onboardingCompletionsForHighestVersionWithError:(id*)arg1;
- (long long)_unitTest_currentOnboardingVersionOverride;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)arg1;
- (id)description;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 regionAvailabilityProvider:(id)arg2;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (id)isOnboardingCompletionWithRegionSupportedOnLocalDevicePresentWithError:(id*)arg1;
- (bool)isRegionCodeSupportedOnLocalDevice:(id)arg1;
- (id)onboardedCountryCodeSupportedStateWithError:(id*)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id*)arg2;
- (id)pairedFeatureAttributesWithError:(id*)arg1;
- (id)regionAvailabilityWithError:(id*)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)removeFeatureSettingValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)resetOnboardingWithCompletion:(id /* block */)arg1;
- (void)saveOnboardingCompletion:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 date:(id)arg3 settings:(id)arg4 completion:(id /* block */)arg5;
- (void)setFeatureSettingData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setFeatureSettingNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setFeatureSettingString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)set_unitTest_currentOnboardingVersionOverride:(long long)arg1;
- (void)unregisterObserver:(id)arg1;

@end
