
@interface SASettingOpenGuidedAccess : SASettingOpenSettings

+ (id)openGuidedAccess;
+ (id)openGuidedAccessWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
