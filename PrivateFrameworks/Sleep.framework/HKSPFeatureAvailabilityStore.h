
@interface HKSPFeatureAvailabilityStore : NSObject <HKFeatureAvailabilityProviding, HKSPSleepStorePrivateObserver> {
    <HKSPFeatureSettingsModel> * _cachedFeatureSettingsModel;
    <HKSPOnboardingModel> * _cachedOnboardingModel;
    int  _deviceCharacteristicChangeNotifyToken;
    long long  _feature;
    NSString * _featureIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _modelLock;
    HKSPObserverSet * _observers;
    <HKSPFeatureAvailabilityPairedDeviceRegistry> * _pairedDeviceRegistry;
    <HKSPSleepOnboardingStore> * _sleepStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultRequirements;
- (id)_featureSettingsForOnboardingModel:(id)arg1 featureSettingsModel:(id)arg2;
- (id)_featureSettingsModelWithError:(id*)arg1;
- (bool)_isCurrentOnboardingVersionCompletedForOnboardingModel:(id)arg1;
- (void)_notifyObserversForDidUpdateOnboarding;
- (void)_notifyObserversForDidUpdateSettings;
- (long long)_onboardedCountrySupportedStateForOnboardingModel:(id)arg1;
- (id)_onboardingCompletionForOnboardingModel:(id)arg1;
- (unsigned long long)_onboardingIneligibilityReasons;
- (void)_onboardingModelWithCompletion:(id /* block */)arg1;
- (id)_onboardingModelWithError:(id*)arg1;
- (void)_pairedDeviceDidChange;
- (void)_registerForNotifications;
- (id)_sleepTrackingRequirements;
- (bool)_updateCachedFeatureSettingsModel:(id)arg1;
- (bool)_updateCachedOnboardingModel:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 sleepStore:(id)arg2;
- (id)initWithFeatureIdentifier:(id)arg1 sleepStore:(id)arg2 pairedDeviceRegistry:(id)arg3;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
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
- (void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2;
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
