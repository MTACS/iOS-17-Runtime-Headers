
@interface CRSUIProxyApplicationSceneSettings : CRSUIApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic, readonly, copy) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic, readonly) bool proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly) Class superclass;

- (long long)mapStyle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)proxiedApplicationBundleIdentifier;
- (bool)proxiedApplicationLinkedOnOrAfterYukon;

@end
