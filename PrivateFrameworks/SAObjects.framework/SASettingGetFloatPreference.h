
@interface SASettingGetFloatPreference : SASettingGetFloat

@property (nonatomic, copy) NSString *settingKey;

+ (id)getFloatPreference;
+ (id)getFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSettingKey:(id)arg1;
- (id)settingKey;

@end
