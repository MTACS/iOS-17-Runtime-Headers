
@interface CKKeepMessagesPreferenceManager : NSObject

+ (id)keepMessagesPreference;
+ (void)setSyncedSettingsManager:(id)arg1;
+ (id)syncedSettingsManager;

- (void)_setLegacyKeepMessagesPreference:(id)arg1;
- (void)addSyncedSettingObserver:(id)arg1 selector:(SEL)arg2 key:(long long)arg3;
- (void)dealloc;
- (void)removeSyncedSettingObserver:(id)arg1 key:(long long)arg2;
- (void)updateKeepMessagesPreference:(id)arg1;

@end
