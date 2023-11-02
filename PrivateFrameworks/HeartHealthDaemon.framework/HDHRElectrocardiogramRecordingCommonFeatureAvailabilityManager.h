
@interface HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager : NSObject <HDDatabaseProtectedDataObserver, HDFeatureAvailabilityExtension, HDHealthDaemonReadyObserver, HDPairedDeviceCapabilityProvidingObserver> {
    HKFeatureAvailabilityRequirementSet * _availabilityRequirementSet;
    NSUserDefaults * _cacheDefaults;
    <HDFeatureDisableAndExpiryProviding> * _disableAndExpiryProvider;
    NSString * _featureIdentifier;
    bool  _isStandalone;
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> * _observers;
    unsigned long long  _onboardingVersion;
    <HDPairedFeatureAttributesProviding> * _pairedFeatureAttributesProvider;
    HDProfile * _profile;
    <HDRegionAvailabilityProviding> * _regionAvailabilityProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentOnboardingHistoryDictionaryWithError:(id*)arg1;
- (unsigned long long)_ineligibilityReasonsForRescindedStatus:(long long)arg1;
- (bool)_isFeatureSupportedOnDevice:(id)arg1;
- (id)_makeOnboardingHistoryWithOnboardingVersion:(long long)arg1 countryCode:(id)arg2 error:(id*)arg3;
- (id)_onboardingCompletionWithError:(id*)arg1;
- (void)_saveFirstOnboardingCompletionDateIfNeeded:(id)arg1;
- (void)_setOnboardingCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 onboardingVersion:(unsigned long long)arg3 date:(id)arg4 settings:(id)arg5 completion:(id /* block */)arg6;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (id)countryAvailabilityVersion;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)description;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 onboardingVersion:(unsigned long long)arg3 pairedFeatureAttributesProvider:(id)arg4 disableAndExpiryProvider:(id)arg5 regionAvailabilityProvider:(id)arg6 availabilityRequirementSet:(id)arg7 cacheDefaults:(id)arg8 isStandalone:(bool)arg9;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (id)onboardedCountryCodeSupportedStateWithError:(id*)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id*)arg2;
- (void)pairedDeviceCapabilitiesDidUpdate:(id)arg1;
- (id)pairedDeviceProvider;
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
- (void)unregisterObserver:(id)arg1;

@end
