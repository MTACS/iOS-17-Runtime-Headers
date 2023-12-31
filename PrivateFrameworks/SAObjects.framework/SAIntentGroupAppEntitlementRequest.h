
@interface SAIntentGroupAppEntitlementRequest : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *appBundleId;

+ (id)appEntitlementRequest;
+ (id)appEntitlementRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;

@end
