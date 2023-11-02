
@interface HKFeatureAvailabilityStore : NSObject <HKFeatureAvailabilityProviding, HKFeatureAvailabilityStoreClient, _HKXPCExportable> {
    NSString * _featureIdentifier;
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversForOnboardingCompletionUpdate;
- (void)_notifyObserversForPairedDeviceCapabilityUpdate;
- (void)_notifyObserversForSettingsUpdate;
- (void)_startObservingWithActivationHandler:(id /* block */)arg1;
- (bool)_synchronouslyStartObservingWithError:(id*)arg1;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (void)client_featureAvailabilityExtensionDidUpdateOnboardingCompletion;
- (void)client_featureAvailabilityExtensionDidUpdatePairedDeviceCapability;
- (void)client_featureAvailabilityProvidingDidUpdateSettings;
- (void)connectionInvalidated;
- (id)description;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)exportedInterface;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (id)onboardedCountryCodeSupportedStateWithError:(id*)arg1;
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id*)arg2;
- (id)pairedFeatureAttributesWithError:(id*)arg1;
- (id)regionAvailabilityWithError:(id*)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2 activationHandler:(id /* block */)arg3;
- (id)remoteInterface;
- (void)removeFeatureSettingValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)resetOnboardingWithCompletion:(id /* block */)arg1;
- (void)saveOnboardingCompletion:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 date:(id)arg3 settings:(id)arg4 completion:(id /* block */)arg5;
- (void)setFeatureSettingData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setFeatureSettingNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setFeatureSettingString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterObserver:(id)arg1;

@end
