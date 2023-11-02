
@interface HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager : NSObject <HDDatabaseProtectedDataObserver, HDFeatureAvailabilityExtension, HDHealthDaemonReadyObserver> {
    <HDFeatureDisableAndExpiryProviding> * _disableAndExpiryProvider;
    NSUserDefaults * _notificationSettingDefaults;
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> * _observers;
    <HDPairedDeviceCapabilityProviding> * _pairedDeviceProvider;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_countryCodeIsSupportedForDevicePairing:(id)arg1 device:(id)arg2;
- (bool)_isFeatureSupportedOnDevice:(id)arg1;
- (id)_onboardingCompletionWithError:(id*)arg1;
- (id)_onboardingEligibilityForCountryCode:(id)arg1 error:(id*)arg2;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (id)countryAvailabilityVersion;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 disableAndExpiryProvider:(id)arg2 notificationSettingDefaults:(id)arg3;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
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
- (void)unregisterObserver:(id)arg1;

@end
