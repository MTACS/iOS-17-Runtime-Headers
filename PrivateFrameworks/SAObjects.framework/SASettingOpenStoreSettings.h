
@interface SASettingOpenStoreSettings : SASettingOpenAppSettings

+ (id)openStoreSettings;
+ (id)openStoreSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
