
@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appBundleIds;

+ (id)appAuthorizationStatusRequest;
+ (id)appAuthorizationStatusRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppBundleIds:(id)arg1;

@end
