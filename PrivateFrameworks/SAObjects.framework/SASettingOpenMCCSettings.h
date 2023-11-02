
@interface SASettingOpenMCCSettings : SASettingOpenAppSettings

+ (id)openMCCSettings;
+ (id)openMCCSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
