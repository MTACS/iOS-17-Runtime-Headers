
@interface SBSystemUISceneController : NSObject <BSDescriptionProviding, FBProcessManagerObserver, FBProcessObserver, SBFSceneWorkspaceControlling, SBScenePresentingDelegate> {
    FBProcess * _clientProcess;
    RBSProcessIdentity * _clientProcessIdentity;
    SBSystemUISceneDefaultPresenter * _defaultPresenter;
    NSString * _jobLabel;
    double  _level;
    NSMapTable * _presentersMap;
    NSMutableArray * _sceneControllers;
    NSMapTable * _sceneControllersByDisplayIdentity;
    unsigned long long  _sceneIDGeneration;
    long long  _sceneVendingPolicy;
    SBFSceneWorkspaceController * _sceneWorkspaceController;
    SBFSceneWorkspaceDefaultDelegate * _sceneWorkspaceControllerDelegate;
    <BSInvalidatable> * _stateCaptureInvalidatable;
    NSString * _traitsRole;
}

@property (nonatomic, readonly) RBSProcessIdentity *clientProcessIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SBSystemUISceneDefaultPresenter *defaultPresenter;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) long long sceneVendingPolicy;
@property (nonatomic, readonly) SBFSceneWorkspaceController *sceneWorkspaceController;
@property (nonatomic, retain) SBFSceneWorkspaceDefaultDelegate *sceneWorkspaceControllerDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *traitsRole;

+ (id)_setupInfo;

- (void).cxx_destruct;
- (id)__newSceneIdentifierForWindowScene:(id)arg1;
- (void)_evaluateAvailablePresenters:(id)arg1 forSceneControllers:(id)arg2;
- (void)_invalidateSceneControllersForWindowScene:(id)arg1;
- (bool)_isAllowedToRecreateSceneOnConnectingWindowScene:(id)arg1;
- (id)_newAppSceneRequestOptionsForWindowScene:(id)arg1 withBlueprintOptions:(id)arg2;
- (id)_newSceneControllerForWindowScene:(id)arg1 sceneRequestOptions:(id)arg2 traitsRole:(id)arg3 level:(double)arg4;
- (id)_newSceneControllerForWindowScene:(id)arg1 withSceneRequestOptions:(id)arg2;
- (id)_orderedPresenters;
- (void)_setNeedsPresentersEvaluation;
- (void)activateSceneForProcessIdentity:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)addPresenter:(id)arg1;
- (id)clientProcessIdentity;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultPresenter;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 processIdentity:(id)arg2 completion:(id /* block */)arg3;
- (bool)enumerateScenesWithBlock:(id /* block */)arg1;
- (id)initWithSceneWorkspaceIdentifier:(id)arg1 clientProcessIdentity:(id)arg2 sceneVendingPolicy:(long long)arg3 traitsRole:(id)arg4 jobLabel:(id)arg5 level:(double)arg6;
- (id)jobLabel;
- (double)level;
- (void)processDidExit:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (id)sceneFromIdentityToken:(id)arg1;
- (id)sceneFromIdentityTokenStringRepresentation:(id)arg1;
- (void)scenePresenterVisibilityDidChange:(id)arg1;
- (long long)sceneVendingPolicy;
- (id)sceneWorkspaceController;
- (id)sceneWorkspaceControllerDelegate;
- (id)sceneWorkspaceControllerForProcessIdentity:(id)arg1;
- (void)setDefaultPresenter:(id)arg1;
- (void)setSceneWorkspaceControllerDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)traitsRole;
- (void)windowSceneDidConnect:(id)arg1;
- (void)windowSceneDidDisconnect:(id)arg1;

@end
