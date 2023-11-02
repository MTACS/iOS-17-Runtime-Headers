
@interface SASettingOpenSettings : SASettingCommand

+ (id)openSettings;
+ (id)openSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
