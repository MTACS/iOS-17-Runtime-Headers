
@interface HDMobilityWalkingSteadinessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKMobilityWalkingSteadinessFeatureStatusManagerServerInterface> {
    NSUserDefaults * _ageGatingDefaults;
    <HDFeatureAvailabilityExtension> * _classificationsFeatureAvailabilityExtension;
    HDDataCollectionManager * _dataCollectionManager;
    <HDMobilityHealthAppNotificationAuthorizationStatusProvider> * _healthAppNotificationAuthorizationStatusProvider;
    <HDMobilityIsAgePresentProvider> * _isAgePresentProvider;
    <HDMobilityIsHeightPresentProvider> * _isHeightPresentProvider;
    NSUserDefaults * _mobilitySettingsDefaults;
    <HDFeatureAvailabilityExtension> * _notificationsFeatureAvailabilityExtension;
    bool  _observing;
    NSObject<OS_dispatch_queue> * _queue;
    <HDMobilityRegionSupportedDeterminer> * _regionSupportedDeterminer;
    int  _userCharacteristicsNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_hasWriteEntitlement:(id)arg1 withError:(id*)arg2;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_clientRemoteObjectProxy;
- (void)_fitnessTrackingEnabledChanged;
- (id)_getNotificationStatusWithError:(id*)arg1;
- (id)_getOnboardingStatusWithError:(id*)arg1;
- (bool)_isAgeGated;
- (id)_isAgePresentWithError:(id*)arg1;
- (bool)_isDeviceSupported;
- (bool)_isFitnessTrackingEnabled;
- (bool)_isHealthAppHidden;
- (id)_isHeightPresentWithError:(id*)arg1;
- (bool)_isOnboardedFeatureSupported;
- (bool)_isWalkingSteadinessClassificationAvailableWithError:(id*)arg1;
- (void)_notifyClientChangesToOnboardingStatus:(bool)arg1 changesToNotificationStatus:(bool)arg2;
- (void)_stopObservingChangesAndExpectToBeObserving:(bool)arg1;
- (void)_userCharacteristicsChanged;
- (void)dealloc;
- (bool)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)arg1;
- (id)exportedInterface;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 classificationsFeatureAvailabilityExtension:(id)arg5 notificationsFeatureAvailabilityExtension:(id)arg6 regionSupportedDeterminer:(id)arg7 ageGatingDefaults:(id)arg8 mobilitySettingsDefaults:(id)arg9 isHeightPresentProvider:(id)arg10 isAgePresentProvider:(id)arg11 healthAppNotificationAuthorizationStatusProvider:(id)arg12;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)remoteInterface;
- (void)remote_fitnessTrackingEnabledWithCompletion:(id /* block */)arg1;
- (void)remote_notificationStatusWithCompletion:(id /* block */)arg1;
- (void)remote_onboardingStatusWithCompletion:(id /* block */)arg1;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)arg1;
- (void)remote_setNotificationsEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)arg1;
- (void)remote_stopObservingChanges;

@end
