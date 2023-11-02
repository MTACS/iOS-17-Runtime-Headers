
@interface SASettingGetBoolResponse : SASettingGetValueResponse

+ (id)getBoolResponse;
+ (id)getBoolResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
