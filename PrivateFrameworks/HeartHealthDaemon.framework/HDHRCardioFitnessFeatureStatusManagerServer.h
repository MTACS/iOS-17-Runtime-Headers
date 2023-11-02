
@interface HDHRCardioFitnessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKHRCardioFitnessFeatureStatusManagerServer, HKWatchAppInstallationManagerObserver, HKWristDetectionSettingManagerObserver> {
    NSUserDefaults * _ageGatingDefaults;
    <HDFeatureAvailabilityExtension> * _featureAvailabilityExtension;
    NSUserDefaults * _heartRateSettingsDefaults;
    <HKHRCardioFitnessIsAgePresentProvider> * _isAgePresentProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _observing;
    NSUserDefaults * _privacyDefaults;
    int  _privacyPreferencesNotificationToken;
    NSObject<OS_dispatch_queue> * _queue;
    <HDHRRegionSupportedDeterminer> * _regionSupportedDeterminer;
    int  _userCharacteristicsNotificationToken;
    HKWatchAppInstallationManager * _watchAppInstallationManager;
    HKWristDetectionSettingManager * _wristDetectionSettingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_clientRemoteObjectProxy;
- (bool)_doesActiveWatchSupportFeature;
- (id)_getNotificationStatusWithError:(id*)arg1;
- (id)_getOnboardingStatusWithError:(id*)arg1;
- (void)_heartRateSettingsSynced;
- (bool)_isAgeGated;
- (id)_isAgePresentWithError:(id*)arg1;
- (id)_isCardioFitnessClassificationAvailableWithError:(id*)arg1;
- (bool)_isHealthAppHidden;
- (bool)_isHeartRateEnabled;
- (bool)_isOnboardedFeatureSupportedOnBothPhoneAndWatch;
- (bool)_isWatchAppInstalled;
- (bool)_isWristDetectEnabled;
- (void)_notifyClientChangesToOnboardingStatus:(bool)arg1 changesToNotificationStatus:(bool)arg2;
- (bool)_requiresMedicationDetailsConfirmation;
- (void)_stopObservingChangesAndExpectToBeObserving:(bool)arg1;
- (void)_userCharacteristicsChanged;
- (void)dealloc;
- (bool)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)arg1;
- (id)exportedInterface;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 featureAvailabilityExtension:(id)arg5 regionSupportedDeterminer:(id)arg6 ageGatingDefaults:(id)arg7 heartRateSettingsDefaults:(id)arg8 privacyDefaults:(id)arg9 isAgePresentProvider:(id)arg10 wristDetectionSettingManager:(id)arg11 watchAppInstallationManager:(id)arg12;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)remoteInterface;
- (void)remote_notificationStatusWithCompletion:(id /* block */)arg1;
- (void)remote_onboardingStatusWithCompletion:(id /* block */)arg1;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)arg1;
- (void)remote_setNotificationsEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)arg1;
- (void)remote_stopObservingChanges;
- (void)watchAppInstallationManagerDidObserveChange:(id)arg1;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)arg1;

@end
