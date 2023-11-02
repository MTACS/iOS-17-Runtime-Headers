
@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *executionEnvironment;
@property (nonatomic, copy) NSString *launchId;

+ (id)checkRestriction;
+ (id)checkRestrictionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)executionEnvironment;
- (id)groupIdentifier;
- (id)launchId;
- (bool)requiresResponse;
- (void)setExecutionEnvironment:(id)arg1;
- (void)setLaunchId:(id)arg1;

@end
