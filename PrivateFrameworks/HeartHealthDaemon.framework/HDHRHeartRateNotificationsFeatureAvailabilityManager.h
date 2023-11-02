
@interface HDHRHeartRateNotificationsFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension> {
    NSString * _featureIdentifier;
    NSUserDefaults * _notificationSettingsDefaults;
    HKObserverSet * _observers;
    <HDPairedDeviceCapabilityProviding> * _pairedDeviceCapabilityProvider;
}

@property (nonatomic, readonly, copy) NSString *featureIdentifier;

- (void).cxx_destruct;
- (id)_activeRemoteDeviceSupportsHeartRateNotificationsWithError:(id*)arg1;
- (long long)_defaultHeartRateThreshold;
- (id)_featureEnabledDefaultsKey;
- (id)_featureSettings;
- (bool)_isActiveRemoteDevicePresent;
- (bool)_isOnboardingRecordPresent;
- (void)_setFeatureEnabled:(id)arg1 preferredThreshold:(id)arg2;
- (id)_thresholdDefaultsKey;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 notificationSettingsDefaults:(id)arg2 pairedDeviceCapabilityProvider:(id)arg3;
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
