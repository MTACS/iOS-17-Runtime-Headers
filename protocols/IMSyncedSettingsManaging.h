
@protocol IMSyncedSettingsManaging <NSObject>

@required

- (void)setSettingValue:(id)arg1 forKey:(long long)arg2;
- (id)settingValueForKey:(long long)arg1;

@optional

- (void)addObserver:(id)arg1 selector:(SEL)arg2 key:(long long)arg3;
- (void)removeObserver:(id)arg1 key:(long long)arg2;

@end
