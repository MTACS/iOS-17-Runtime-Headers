
@interface SBNonInteractiveDisplayControllerPolicy : NSObject <FBSceneObserver, SBSceneHostingDisplayControllerPolicy, SBSceneLayoutChildTransactionProviding, SBWorkspaceApplicationSceneTransitionContextDelegate> {
    SBApplicationController * _applicationController;
    SBApplication * _currentApplication;
    FBSDisplayLayoutElement * _currentLayoutElement;
    <BSInvalidatable> * _currentLayoutElementAssertion;
    FBScene * _currentScene;
    SBSceneHostingDisplayController * _displayController;
    FBSDisplayIdentity * _displayIdentity;
    FBSceneManager * _fbSceneManager;
    FBSDisplayConfiguration * _lastPresentationUpdateDisplayConfiguration;
    FBScene * _lastPresentationUpdateScene;
    <FBSDisplayLayoutPublishing> * _layoutPublisher;
    SBWindowScene * _monitoredWindowScene;
    unsigned long long  _previouslyReceivedDeactivationReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchOrCreateSceneForApplication:(id)arg1 monitoredDisplayScene:(id)arg2 fromSceneManager:(id)arg3 displayConfiguration:(id)arg4 deactivationReasons:(unsigned long long)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;
- (id)assertionPreferencesForDisplay:(id)arg1 displayConfiguration:(id)arg2;
- (id)childTransactionsForTransitionRequest:(id)arg1;
- (void)connectToDisplayController:(id)arg1 displayConfiguration:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)displayAssertionDeactivationReasons:(id)arg1;
- (unsigned long long)displayAssertionPriorityLevel:(id)arg1;
- (void)displayController:(id)arg1 didBeginTransaction:(id)arg2 sceneManager:(id)arg3 displayConfiguration:(id)arg4 deactivationReasons:(unsigned long long)arg5;
- (void)displayController:(id)arg1 didGainControlOfDisplayWithSceneManager:(id)arg2;
- (void)displayController:(id)arg1 sceneManager:(id)arg2 didLoseControlOfDisplayWithDeactivationReasons:(unsigned long long)arg3;
- (void)displayController:(id)arg1 sceneManager:(id)arg2 didReceiveNewDeactivationReasons:(unsigned long long)arg3;
- (bool)displayController:(id)arg1 shouldUpdatePresentationWithSceneManager:(id)arg2 displayConfiguration:(id)arg3;
- (void)displayController:(id)arg1 updatePresentationWithSceneManager:(id)arg2 displayConfiguration:(id)arg3 completion:(id /* block */)arg4;
- (void)displayControllerDidDisconnect:(id)arg1 sceneManager:(id)arg2;
- (void)displayControllerWillDisconnect:(id)arg1 sceneManager:(id)arg2;
- (id)displayPreferencesForDisplayController:(id)arg1;
- (id)initWithFBSceneManager:(id)arg1 monitoredWindowScene:(id)arg2 applicationController:(id)arg3;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;

@end
