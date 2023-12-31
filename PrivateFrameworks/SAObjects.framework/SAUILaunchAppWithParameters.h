
@interface SAUILaunchAppWithParameters : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSDictionary *parameters;

+ (id)launchAppWithParameters;
+ (id)launchAppWithParametersWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parameters;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;
- (void)setParameters:(id)arg1;

@end
