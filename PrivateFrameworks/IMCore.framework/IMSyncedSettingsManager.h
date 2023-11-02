
@interface IMSyncedSettingsManager : NSObject <IMSyncedSettingsManaging> {
    IMSyncedSettingsManager_Impl * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) IMSyncedSettingsManager_Impl *impl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 key:(long long)arg3;
- (id)impl;
- (id)init;
- (void)removeObserver:(id)arg1 key:(long long)arg2;
- (void)setSettingValue:(id)arg1 forKey:(long long)arg2;
- (id)settingValueForKey:(long long)arg1;

@end
