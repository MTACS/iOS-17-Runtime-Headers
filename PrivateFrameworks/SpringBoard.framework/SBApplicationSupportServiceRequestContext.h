
@interface SBApplicationSupportServiceRequestContext : NSObject {
    SBApplication * _app;
    UISApplicationInitializationContext * _applicationInitializationContext;
    SBApplication * _extensionContainingApp;
    SBApplication * _hostApp;
    bool  _hostIsSpringBoard;
    FBSDisplayConfiguration * _launchDisplayConfiguration;
    <SBApplicationSupportServiceRequestPersistenceIdentifierProvider> * _preferredAppPersistenceIDProvider;
    <SBApplicationSceneIdentityProviding> * _preferredAppSceneIdentityProvider;
    <SBApplicationSupportServiceRequestSceneIdentityTokenProvider> * _preferredSceneIdentityTokenProvider;
}

@property (nonatomic, readonly) UISApplicationInitializationContext *applicationInitializationContext;

+ (id)_hostProcessForProcess:(id)arg1;
+ (id)hostingApplicationBundleIDForPid:(int)arg1;
+ (id)initializationContextForClient:(id)arg1;
+ (bool)shouldOverrideClientInitialization:(id)arg1;

- (void).cxx_destruct;
- (id)_main_appPersistenceIDProvider;
- (id)_main_appSceneIdentityProvider;
- (id)_main_applicationInitializationContext;
- (void)_main_applyClassicModeLiesIfNecessaryToDisplayContext:(id)arg1;
- (id)_main_deviceContext;
- (id)_main_displayContextForDisplayConfiguration:(id)arg1;
- (id)_main_effectiveApplicationForCompatibility;
- (long long)_main_effectiveClassicMode;
- (unsigned long long)_main_effectiveScreenType;
- (id)_main_embeddedDisplayContext;
- (id)_main_launchDisplayContext;
- (id)_main_persistenceIDs;
- (id)_main_sceneIdentityTokenProvider;
- (id)applicationInitializationContext;
- (id)initWithApplication:(id)arg1 launchDisplayConfiguration:(id)arg2;
- (id)initWithApplication:(id)arg1 launchDisplayConfiguration:(id)arg2 persistenceIdentifierProvider:(id)arg3 sceneIdentityProvider:(id)arg4 sceneIdentityTokenProvider:(id)arg5;
- (id)initWithClient:(id)arg1 host:(id)arg2;

@end
