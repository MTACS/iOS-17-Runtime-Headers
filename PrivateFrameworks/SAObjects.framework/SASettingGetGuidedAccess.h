
@interface SASettingGetGuidedAccess : SASettingGetBool

+ (id)getGuidedAccess;
+ (id)getGuidedAccessWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

@end
