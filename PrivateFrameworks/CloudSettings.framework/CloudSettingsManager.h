
@interface CloudSettingsManager : NSObject

+ (id)sharedCloudSettingsManager;

- (id)activeXPCConnectionForStore:(id)arg1;
- (void)applyCloudSettingsToDevice:(id)arg1 forStore:(id)arg2;
- (void)applySettingsToDevice:(id)arg1 forStore:(id)arg2;
- (long long)conflictStateForStore:(id)arg1;
- (id)currentConflictDictionary;
- (id)currentStateDictionary;
- (id)defaultSettingsDictionary;
- (id)deviceSettingsForStore:(id)arg1;
- (bool)isEnabledForStore:(id)arg1;
- (bool)isServiceKnownForStore:(id)arg1;
- (id)knownServiceNames;
- (void)performFirstTimeSetup:(id)arg1;
- (void)setConflict:(long long)arg1 forStore:(id)arg2;
- (void)setEnabled:(bool)arg1 forStore:(id)arg2;
- (void)writeConflictsDictionaryToPrefs:(id)arg1;
- (void)writeSettingsDictionaryToPrefs:(id)arg1;
- (void)writeToCloudSettings:(id)arg1 forStore:(id)arg2;

@end
