
@interface SASettingGetBool : SASettingGetValue

+ (id)getBool;
+ (id)getBoolWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
