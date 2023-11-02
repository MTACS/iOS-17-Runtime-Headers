
@interface SBApplicationSceneHandle : SBSceneHandle {
    SBApplication * _application;
    bool  _insetForHomeAffordance;
    bool  _isSecure;
    long long  _layoutRole;
    NSString * _persistenceIdentifier;
    NSHashTable * _sceneUpdateContributers;
    bool  _sceneUpdateInProgress;
    double  _userLaunchEventTime;
    unsigned long long  _userLaunchSignpostID;
}

@property (nonatomic, readonly) SBApplication *application;
@property (getter=isInsetForHomeAffordance, nonatomic) bool insetForHomeAffordance;
@property (nonatomic) long long layoutRole;
@property (nonatomic, readonly) NSString *persistenceIdentifier;
@property (getter=isSceneUpdateInProgress, nonatomic) bool sceneUpdateInProgress;
@property (getter=isSecure, nonatomic, readonly) bool secure;

+ (id)lookupOrCreatePersistenceIDFromApplication:(id)arg1 sceneID:(id)arg2;

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1;
- (void)_commonInit;
- (void)_commonInitWithApplication:(id)arg1 sceneIdentifier:(id)arg2 displayIdentity:(id)arg3;
- (id)_createApplicationSceneClientSettingsFromContext:(id)arg1 entity:(id)arg2 initialSceneSettings:(id)arg3;
- (id)_createApplicationSceneSettingsFromContext:(id)arg1 entity:(id)arg2;
- (id)_createApplicationSceneTransitionContextFromContext:(id)arg1 entity:(id)arg2;
- (id)_createParametersFromTransitionContext:(id)arg1 entity:(id)arg2;
- (id)_createProcessExecutionContextFromContext:(id)arg1 entity:(id)arg2;
- (id)_initWithApplication:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithApplication:(id)arg1 sceneDefinition:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithDefinition:(id)arg1;
- (id)_initWithScene:(id)arg1;
- (void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4;
- (void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (id)_persistenceIdentifier;
- (void)addSceneUpdateContributer:(id)arg1;
- (id)application;
- (void)dealloc;
- (id)displayItemRepresentation;
- (bool)isInsetForHomeAffordance;
- (bool)isSceneUpdateInProgress;
- (bool)isSecure;
- (long long)layoutRole;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewController;
- (id)newSceneViewWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 contentOrientation:(long long)arg2 containerOrientation:(long long)arg3 hostRequester:(id)arg4;
- (id)persistenceIdentifier;
- (void)removeSceneUpdateContributer:(id)arg1;
- (void)setInsetForHomeAffordance:(bool)arg1;
- (void)setLayoutRole:(long long)arg1;
- (void)setSceneUpdateInProgress:(bool)arg1;

@end
