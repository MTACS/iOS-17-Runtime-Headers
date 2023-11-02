
@protocol HMDLegacyAccessorySettingsAdaptorDelegate

@required

- (void)legacySettingsAdaptor:(id <HMDLegacyAccessorySettingsAdaptor>)arg1 didLoadSettingKeyPath:(NSString *)arg2 boolValue:(bool)arg3;
- (void)legacySettingsAdaptor:(id <HMDLegacyAccessorySettingsAdaptor>)arg1 didLoadSettingKeyPath:(NSString *)arg2 numberValue:(NSNumber *)arg3;
- (void)legacySettingsAdaptor:(id <HMDLegacyAccessorySettingsAdaptor>)arg1 didLoadSettingKeyPath:(NSString *)arg2 selectedLanguageValue:(HMSettingLanguageValue *)arg3 availableLanguageList:(NSArray *)arg4;
- (void)legacySettingsAdaptor:(id <HMDLegacyAccessorySettingsAdaptor>)arg1 didUpdateSettingKeyPath:(NSString *)arg2 boolValue:(bool)arg3;
- (void)legacySettingsAdaptor:(id <HMDLegacyAccessorySettingsAdaptor>)arg1 didUpdateSettingKeyPath:(NSString *)arg2 numberValue:(NSNumber *)arg3;
- (void)legacySettingsAdaptor:(id <HMDLegacyAccessorySettingsAdaptor>)arg1 didUpdateSettingKeyPath:(NSString *)arg2 selectedLanguageValue:(HMSettingLanguageValue *)arg3 availableLanguageList:(NSArray *)arg4;

@end
