
@interface HDFeatureAvailabilityStoreServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKFeatureAvailabilityStoreServer> {
    <HDFeatureAvailabilityExtension> * _extension;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)remoteInterface;
- (void)remote_canCompleteOnboardingForCountryCode:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (void)remote_getFeatureAvailabilityRequirementsWithCompletion:(id /* block */)arg1;
- (void)remote_getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(id /* block */)arg1;
- (void)remote_getPairedFeatureAttributesWithCompletion:(id /* block */)arg1;
- (void)remote_getRegionAvailabilityWithCompletion:(id /* block */)arg1;
- (void)remote_onboardedCountryCodeSupportedStateWithCompletion:(id /* block */)arg1;
- (void)remote_onboardingEligibilityForCountryCode:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeFeatureSettingValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)arg1;
- (void)remote_saveOnboardingCompletion:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 date:(id)arg3 settings:(id)arg4 completion:(id /* block */)arg5;
- (void)remote_setFeatureSettingData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setFeatureSettingNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setFeatureSettingString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)arg1;
- (void)remote_stopObservingChanges;

@end
