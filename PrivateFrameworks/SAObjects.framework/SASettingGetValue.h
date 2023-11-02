
@interface SASettingGetValue : SASettingCommand

+ (id)getValue;
+ (id)getValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
