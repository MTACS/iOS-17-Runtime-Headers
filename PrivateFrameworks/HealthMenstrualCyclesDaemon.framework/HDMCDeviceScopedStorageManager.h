
@interface HDMCDeviceScopedStorageManager : NSObject <HKMCSettingsManagerObserver> {
    HDDeviceKeyValueStoreManager * _keyValueStore;
    HKObserverSet * _observers;
    HKMCSettingsManager * _settingsManager;
    HDMCAccountDevicesInfo * _unitTest_accountDevicesInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) HDMCAccountDevicesInfo *unitTest_accountDevicesInfo;

- (void).cxx_destruct;
- (id)_updateLocalDeviceValuesNowWithError:(id*)arg1;
- (id)accountDevicesInfoWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)setUnitTest_accountDevicesInfo:(id)arg1;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (id)unitTest_accountDevicesInfo;
- (void)unregisterObserver:(id)arg1;
- (bool)updateLocalDeviceValuesNowWithError:(id*)arg1;

@end
