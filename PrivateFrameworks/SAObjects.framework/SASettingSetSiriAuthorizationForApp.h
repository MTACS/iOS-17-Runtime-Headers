
@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool

@property (nonatomic, copy) NSString *bundleId;

+ (id)setSiriAuthorizationForApp;
+ (id)setSiriAuthorizationForAppWithDictionary:(id)arg1 context:(id)arg2;

- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setBundleId:(id)arg1;

@end
