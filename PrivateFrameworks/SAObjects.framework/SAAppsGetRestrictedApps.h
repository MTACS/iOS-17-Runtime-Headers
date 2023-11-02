
@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appIds;
@property (nonatomic, copy) NSString *executionEnvironment;

+ (id)getRestrictedApps;
+ (id)getRestrictedAppsWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIds;
- (id)encodedClassName;
- (id)executionEnvironment;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAppIds:(id)arg1;
- (void)setExecutionEnvironment:(id)arg1;

@end
