
@interface CRSUIMutableProxyApplicationSceneSettings : CRSUIMutableApplicationSceneSettings <CRSUIMutableMapStyleProviding, CRSUIProxyApplicationSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic, copy) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic) bool proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)mapStyle;
- (id)proxiedApplicationBundleIdentifier;
- (bool)proxiedApplicationLinkedOnOrAfterYukon;
- (void)setMapStyle:(long long)arg1;
- (void)setProxiedApplicationBundleIdentifier:(id)arg1;
- (void)setProxiedApplicationLinkedOnOrAfterYukon:(bool)arg1;

@end
