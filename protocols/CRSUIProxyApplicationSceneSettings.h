
@protocol CRSUIProxyApplicationSceneSettings <CRSUIMapStyleProviding>

@required

- (NSString *)proxiedApplicationBundleIdentifier;
- (bool)proxiedApplicationLinkedOnOrAfterYukon;

@end
