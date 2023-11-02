
@interface HKFeatureAvailabilityRequirementEvaluationDataSource : NSObject {
    HKUserDefaultsDataSource * _ageGatingDataSource;
    HKBluetoothDeviceDataSource * _bluetoothDeviceDataSource;
    <HKCurrentCountryCodeProvider> * _currentCountryCodeProvider;
    id /* block */  _currentDateDataSource;
    HKDarwinNotificationDataSource * _darwinNotificationDataSource;
    HKNanoRegistryPairingAndSwitchingNotificationDataSource * _devicePairingAndSwitchingNotificationDataSource;
    HKFeatureAvailabilityProvidingDataSource * _featureAvailabilityProvidingDataSource;
    HKFeatureStatusProvidingDataSource * _featureStatusProvidingDataSource;
    <HKFeatureOnboardingRecordFallbackProviding> * _onboardingRecordFallbackProvider;
    HKUserDefaultsDataSource * _privacyPreferencesDataSource;
    HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource * _requirementSatisfactionOverridesDataSource;
    HKUserDefaultsDataSource * _respiratoryPreferencesDataSource;
    <HKFeatureAvailabilityHealthDataSource> * _strongHealthDataSource;
    HKWatchAppInstallationDataSource * _watchAppInstallationDataSource;
    HKWatchLowPowerModeDataSource * _watchLowPowerModeDataSource;
    <HKFeatureAvailabilityHealthDataSource> * _weakHealthDataSource;
    HKWristDetectionSettingDataSource * _wristDetectionSettingDataSource;
}

@property (nonatomic, readonly) HKUserDefaultsDataSource *ageGatingDataSource;
@property (nonatomic, readonly) _HKBehavior *behavior;
@property (nonatomic, readonly) HKBluetoothDeviceDataSource *bluetoothDeviceDataSource;
@property (nonatomic, readonly) <HKCurrentCountryCodeProvider> *currentCountryCodeProvider;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, copy) id /* block */ currentDateDataSource;
@property (nonatomic, readonly) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (nonatomic, readonly) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingNotificationDataSource;
@property (nonatomic, readonly) HKFeatureAvailabilityProvidingDataSource *featureAvailabilityProvidingDataSource;
@property (nonatomic, readonly) HKFeatureStatusProvidingDataSource *featureStatusProvidingDataSource;
@property (nonatomic, retain) <HKFeatureOnboardingRecordFallbackProviding> *onboardingRecordFallbackProvider;
@property (nonatomic, readonly) HKUserDefaultsDataSource *privacyPreferencesDataSource;
@property (nonatomic, readonly) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource;
@property (nonatomic, readonly) HKUserDefaultsDataSource *respiratoryPreferencesDataSource;
@property (nonatomic, readonly) <HKFeatureAvailabilityHealthDataSource> *strongHealthDataSource;
@property (nonatomic, readonly) HKWatchAppInstallationDataSource *watchAppInstallationDataSource;
@property (nonatomic, readonly) HKWatchLowPowerModeDataSource *watchLowPowerModeDataSource;
@property (nonatomic, readonly) <HKFeatureAvailabilityHealthDataSource> *weakHealthDataSource;
@property (nonatomic, readonly) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource;

+ (id)dataSourceWithHealthDataSource:(id)arg1;
+ (id)dataSourceWithHealthDataSource:(id)arg1 currentCountryCodeProvider:(id)arg2;
+ (id)dataSourceWithHealthDataSource:(id)arg1 currentCountryCodeProvider:(id)arg2 onboardingRecordFallbackProvider:(id)arg3;
+ (id)dataSourceWithHealthDataSource:(id)arg1 currentCountryCodeProvider:(id)arg2 wristDetectionSettingManager:(id)arg3 requirementSatisfactionOverridesDataSource:(id)arg4 onboardingRecordFallbackProvider:(id)arg5;

- (void).cxx_destruct;
- (id)ageGatingDataSource;
- (id)behavior;
- (id)bluetoothDeviceDataSource;
- (id)currentCountryCodeProvider;
- (id)currentDate;
- (id /* block */)currentDateDataSource;
- (id)darwinNotificationDataSource;
- (id)devicePairingAndSwitchingNotificationDataSource;
- (id)featureAvailabilityProvidingDataSource;
- (id)featureStatusForFeatureWithIdentifier:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)featureStatusProvidingDataSource;
- (id)healthDataSource;
- (id)initWithHealthDataSource:(id)arg1 bluetoothDeviceDataSource:(id)arg2 privacyPreferencesDataSource:(id)arg3 respiratoryPreferencesDataSource:(id)arg4 ageGatingDataSource:(id)arg5 wristDetectionSettingDataSource:(id)arg6 devicePairingAndSwitchingNotificationDataSource:(id)arg7 darwinNotificationDataSource:(id)arg8 watchLowPowerModeDataSource:(id)arg9 currentCountryCodeProvider:(id)arg10 requirementSatisfactionOverridesDataSource:(id)arg11 currentDateDataSource:(id /* block */)arg12 watchAppInstallationDataSource:(id)arg13 onboardingRecordFallbackProvider:(id)arg14;
- (id)initWithHealthDataSource:(id)arg1 featureAvailabilityProvidingDataSource:(id)arg2 featureStatusProvidingDataSource:(id)arg3 bluetoothDeviceDataSource:(id)arg4 privacyPreferencesDataSource:(id)arg5 respiratoryPreferencesDataSource:(id)arg6 ageGatingDataSource:(id)arg7 wristDetectionSettingDataSource:(id)arg8 devicePairingAndSwitchingNotificationDataSource:(id)arg9 darwinNotificationDataSource:(id)arg10 watchLowPowerModeDataSource:(id)arg11 currentCountryCodeProvider:(id)arg12 requirementSatisfactionOverridesDataSource:(id)arg13 currentDateDataSource:(id /* block */)arg14 watchAppInstallationDataSource:(id)arg15 onboardingRecordFallbackProvider:(id)arg16;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)onboardingRecordFallbackProvider;
- (id)onboardingRecordForFeatureWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)performLocalEvaluation:(id /* block */)arg1;
- (id)privacyPreferencesDataSource;
- (void)registerObserverForDeviceCharacteristicAndPairingChanges:(id)arg1 block:(id /* block */)arg2;
- (id)requirementSatisfactionOverridesDataSource;
- (id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)arg1;
- (id)respiratoryPreferencesDataSource;
- (void)setCurrentDateDataSource:(id /* block */)arg1;
- (void)setOnboardingRecordFallbackProvider:(id)arg1;
- (id)strongHealthDataSource;
- (void)unregisterObserverForDeviceCharacteristicAndPairingChanges:(id)arg1;
- (id)watchAppInstallationDataSource;
- (id)watchLowPowerModeDataSource;
- (id)weakHealthDataSource;
- (id)wristDetectionSettingDataSource;

@end
