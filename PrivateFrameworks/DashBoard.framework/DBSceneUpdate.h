
@interface DBSceneUpdate : NSObject {
    NSDictionary * _activationSettings;
    DBApplicationInfo * _applicationInfo;
    <DBEnvironment> * _environment;
    DBApplicationInfo * _proxyApplicationInfo;
    NSString * _sceneIdentifier;
    UIApplicationStarkSceneSpecification * _sceneSpecification;
    UIMutableCarPlayApplicationSceneSettings * _settings;
    FBApplicationUpdateScenesTransaction * _transaction;
    UIApplicationSceneTransitionContext * _transitionContext;
}

@property (nonatomic, retain) NSDictionary *activationSettings;
@property (nonatomic, retain) DBApplicationInfo *applicationInfo;
@property (nonatomic) <DBEnvironment> *environment;
@property (nonatomic, retain) DBApplicationInfo *proxyApplicationInfo;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, retain) UIApplicationStarkSceneSpecification *sceneSpecification;
@property (nonatomic, readonly) UIMutableCarPlayApplicationSceneSettings *settings;
@property (nonatomic, retain) FBApplicationUpdateScenesTransaction *transaction;
@property (nonatomic, readonly) UIApplicationSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)_effectiveSceneAppInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frame;
- (bool)_isClimateOverlay;
- (long long)_mapStyle;
- (void)_postTransactionUpdateSceneSettingsForScene:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsets;
- (long long)_uiStyle;
- (id)activationSettings;
- (id)applicationInfo;
- (id)environment;
- (id)init;
- (id)initWithApplicationInfo:(id)arg1 environment:(id)arg2;
- (id)initWithApplicationInfo:(id)arg1 environment:(id)arg2 sceneIdentifier:(id)arg3;
- (id)initWithApplicationInfo:(id)arg1 proxyApplicationInfo:(id)arg2 environment:(id)arg3 activationSettings:(id)arg4;
- (id)initWithApplicationInfo:(id)arg1 proxyApplicationInfo:(id)arg2 environment:(id)arg3 activationSettings:(id)arg4 sceneSpecification:(id)arg5;
- (void)performUpdateWithCompletion:(id /* block */)arg1;
- (id)proxyApplicationInfo;
- (id)sceneIdentifier;
- (id)sceneSpecification;
- (void)setActivationSettings:(id)arg1;
- (void)setApplicationInfo:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setProxyApplicationInfo:(id)arg1;
- (void)setSceneSpecification:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)settings;
- (id)transaction;
- (id)transitionContext;

@end
