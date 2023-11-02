
@interface ADASManager : NSObject {
    ADASPreferenceStore * _prefStore;
}

- (void).cxx_destruct;
- (void)_clearCurrentVolumeLimit;
- (void)_donateSignalToTipsKit:(bool)arg1;
- (id)_error:(long long)arg1;
- (bool)_featureFlagEnabled;
- (id)_getCurrentVolumeLimit;
- (id)_getDefaultsFor:(id)arg1;
- (id)_getDefaultsKey:(id)arg1;
- (id)_getDeviceSpecificDefaultsFor:(id)arg1;
- (id)_getSpecialKeys:(id)arg1 nano:(bool)arg2;
- (bool)_isAlertSupported;
- (bool)_isDeviceMandatoryForHAENotification:(bool)arg1;
- (id)_migrateVolumeLimitThreshold:(bool)arg1;
- (void)_notify:(id)arg1;
- (id)_setChainedKeys:(id)arg1 val:(id)arg2 nano:(bool)arg3 modifiedKeys:(id)arg4;
- (id)_setDefaultValueIfNeeded:(id)arg1 nano:(bool)arg2 sync:(bool)arg3;
- (id)_setDefaultsFor:(id)arg1 value:(id)arg2;
- (id)_setDeviceSpecificDefaultsFor:(id)arg1 value:(id)arg2;
- (void)_sync;
- (void)_syncDeviceSpecificDomain;
- (void)_syncNanoDeviceSpecificForRead:(id)arg1;
- (void)_syncNanoForRead:(id)arg1;
- (void)_syncNanoForWrite:(id)arg1;
- (void)didSurfaceMigrationAlert;
- (id)getNanoPreferenceFor:(id)arg1;
- (id)getNanoPreferencesFor:(id)arg1;
- (id)getPreferenceFor:(id)arg1;
- (id)getPreferencesFor:(id)arg1;
- (id)init;
- (void)migrateKeyEnableHAEHKMeasurement:(bool)arg1;
- (bool)nanoSettingsAvailable;
- (void)removeNanoPreferenceFor:(id)arg1;
- (void)removeNanoPreferenceFor:(id)arg1 notify:(bool)arg2;
- (void)removePreferenceFor:(id)arg1;
- (void)removePreferenceFor:(id)arg1 notify:(bool)arg2;
- (id)setNanoPreferenceFor:(id)arg1 value:(id)arg2;
- (id)setNanoPreferenceFor:(id)arg1 value:(id)arg2 notify:(bool)arg3;
- (id)setPreferenceFor:(id)arg1 value:(id)arg2;
- (id)setPreferenceFor:(id)arg1 value:(id)arg2 notify:(bool)arg3;
- (bool)shouldSufaceHAENotificationMigrationAlert;

@end
