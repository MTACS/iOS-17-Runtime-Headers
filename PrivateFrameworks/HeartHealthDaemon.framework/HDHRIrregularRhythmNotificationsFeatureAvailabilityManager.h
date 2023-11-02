
@interface HDHRIrregularRhythmNotificationsFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDFeatureAvailabilityExtensionObserver> {
    HKObserverSet * _observers;
    <HDFeatureAvailabilityExtension> * _v1FeatureAvailabilityManager;
    <HDFeatureAvailabilityExtension> * _v2FeatureAvailabilityManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKObserverSet *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDFeatureAvailabilityExtension> *v1FeatureAvailabilityManager;
@property (nonatomic, readonly) <HDFeatureAvailabilityExtension> *v2FeatureAvailabilityManager;

- (void).cxx_destruct;
- (long long)_featureSupportedStateForOnboardedV1CountryCodeSupportedState:(long long)arg1 onboardedV2CountryCodeSupportedState:(long long)arg2;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)highestAvailableOnboardedAlgorithmVersionWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1 v2PairedFeaturePropertiesSyncManager:(id)arg2 notificationSettingDefaults:(id)arg3;
- (id)initWithV1FeatureAvailabilityManager:(id)arg1 v2FeatureAvailabilityManager:(id)arg2;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (id)observers;
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
- (id)v1FeatureAvailabilityManager;
- (id)v2FeatureAvailabilityManager;

@end
