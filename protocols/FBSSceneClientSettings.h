
@protocol FBSSceneClientSettings

@required

- (BSKeyedSettings *)layers;
- (long long)preferredInterfaceOrientation;
- (double)preferredLevel;
- (NSString *)preferredSceneHostIdentifier;
- (FBSSceneIdentityToken *)preferredSceneHostIdentity;
- (void)setLayers:(BSKeyedSettings *)arg1;
- (void)setPreferredInterfaceOrientation:(long long)arg1;
- (void)setPreferredLevel:(double)arg1;
- (void)setPreferredSceneHostIdentifier:(NSString *)arg1;
- (void)setPreferredSceneHostIdentity:(FBSSceneIdentityToken *)arg1;

@end
