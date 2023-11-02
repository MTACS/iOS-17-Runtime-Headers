
@interface SASettingSetFloatPreference : SASettingSetFloat

@property (nonatomic, copy) NSString *settingKey;

+ (id)setFloatPreference;
+ (id)setFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setSettingKey:(id)arg1;
- (id)settingKey;

@end
