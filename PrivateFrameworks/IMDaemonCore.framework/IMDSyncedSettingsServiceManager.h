
@interface IMDSyncedSettingsServiceManager : NSObject <IMSyncedSettingsManaging> {
    IMDSyncedSettingsServiceManager_Impl * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) IMDSyncedSettingsServiceManager_Impl *impl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)impl;
- (id)init;
- (id)initWithLocalDomain:(id)arg1 remoteDomain:(id)arg2 localStorageDelegate:(id)arg3 remoteStorageDelegate:(id)arg4;
- (void)setSettingValue:(id)arg1 forKey:(long long)arg2;
- (id)settingValueForKey:(long long)arg1;

@end
