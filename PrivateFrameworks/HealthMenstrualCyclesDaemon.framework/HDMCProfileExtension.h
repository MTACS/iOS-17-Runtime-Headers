
@interface HDMCProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDMCSettingsMigrationManagerDelegate, HDMCWatchSettingsCompatibilityManagerDelegate, HDMCWatchSettingsReconciliationManagerDelegate, HDProfileExtension> {
    HDMCAnalysisManager * _analysisManager;
    HDMCAnalysisScheduler * _analysisScheduler;
    HDMCAnalyticsManager * _analyticsManager;
    HKCalendarCache * _calendarCache;
    HDBackgroundFeatureDeliveryManager * _deviationsBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager * _deviationsFeatureAvailabilityManager;
    HDMCDeviceScopedStorageManager * _deviceScopedStorageManager;
    HDFeatureAvailabilityManager * _featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager * _heartRateBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager * _heartRateFeatureAvailabilityManager;
    HDMCNotificationManager * _notificationManager;
    HDMCNotificationSyncManager * _notificationSyncManager;
    HDMCPostInstallUpdateManager * _postInstallUpdateManager;
    HDPrimaryProfile * _profile;
    HKMCSettingsManager * _settingsManager;
    HDMCSettingsMigrationManager * _settingsMigrationManager;
    HDMCWatchSettingsCompatibilityManager * _watchSettingsCompatibilityManager;
    HDMCWatchSettingsReconciliationManager * _watchSettingsReconciliationManager;
    HDAnalyticsDailyEventManager * _wristTemperatureDailyEventManager;
    HDFeatureAvailabilityManager * _wristTemperatureInputAvailabilityManager;
    HDBackgroundFeatureDeliveryManager * _wristTemperatureInputBackgroundFeatureDeliveryManager;
}

@property (nonatomic, readonly) HDMCAnalysisManager *analysisManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDMCDeviceScopedStorageManager *deviceScopedStorageManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDMCNotificationManager *notificationManager;
@property (nonatomic, readonly) HDMCNotificationSyncManager *notificationSyncManager;
@property (nonatomic, readonly) HDPrimaryProfile *profile;
@property (nonatomic, readonly) HKMCSettingsManager *settingsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_triggerImmediateSyncWithReason:(id)arg1;
- (id)analysisManager;
- (id)deviceScopedStorageManager;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2;
- (id)notificationManager;
- (id)notificationSyncManager;
- (id)profile;
- (id)settingsManager;
- (void)settingsMigrationManagerDidCompleteMigration:(id)arg1 didRunMigrationSteps:(bool)arg2;
- (void)watchSettingsCompatibilityManager:(id)arg1 didChangeUserDefaultsKeys:(id)arg2;
- (void)watchSettingsReconciliationManager:(id)arg1 didReconcileValuesForKeys:(id)arg2 didUpdateFeatureSetting:(bool)arg3 didUpdateUserDefault:(bool)arg4;

@end
