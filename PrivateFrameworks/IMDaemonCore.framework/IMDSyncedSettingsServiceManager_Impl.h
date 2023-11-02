
@interface IMDSyncedSettingsServiceManager_Impl : NSObject {
    void localDomain;
    void localStorageDelegate;
    void remoteDomain;
    void remoteStorageDelegate;
    void sharedOTPDefaults;
    void ubiquitousStoreQueue;
}

- (void).cxx_destruct;
- (void)cloudkitStateEnabledReturnedWithNotification:(id)arg1;
- (void)dealloc;
- (void)handleDidChangeWithNotification:(id)arg1;
- (id)init;
- (id)initWithLocalDomain:(id)arg1 remoteDomain:(id)arg2 localStorageDelegate:(id)arg3 remoteStorageDelegate:(id)arg4;
- (void)setSettingValue:(id)arg1 forKey:(long long)arg2;
- (id)settingValueForKey:(long long)arg1;

@end
