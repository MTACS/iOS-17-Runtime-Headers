
@interface UISMutableApplicationInitializationContext : UISApplicationInitializationContext

@property (nonatomic, retain) UISCompatibilityContext *compatibilityContext;
@property (nonatomic, retain) FBSSceneIdentityToken *defaultSceneToken;
@property (nonatomic, retain) UISDeviceContext *deviceContext;
@property (nonatomic, retain) UISDisplayContext *displayContext;
@property (nonatomic, retain) UISDisplayContext *launchDisplayContext;
@property (nonatomic, retain) UISDisplayContext *mainDisplayContext;
@property (nonatomic, retain) NSSet *persistedSceneIdentifiers;
@property (nonatomic) bool supportAppSceneRequests;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCompatibilityContext:(id)arg1;
- (void)setDefaultSceneToken:(id)arg1;
- (void)setDeviceContext:(id)arg1;
- (void)setDisplayContext:(id)arg1;
- (void)setLaunchDisplayContext:(id)arg1;
- (void)setMainDisplayContext:(id)arg1;
- (void)setPersistedSceneIdentifiers:(id)arg1;
- (void)setSupportAppSceneRequests:(bool)arg1;

@end
