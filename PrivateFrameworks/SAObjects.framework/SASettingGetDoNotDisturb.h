
@interface SASettingGetDoNotDisturb : SASettingGetBool

+ (id)getDoNotDisturb;
+ (id)getDoNotDisturbWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
