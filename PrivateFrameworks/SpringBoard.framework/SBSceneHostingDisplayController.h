
@interface SBSceneHostingDisplayController : NSObject <SBDisplayControlling> {
    _UIRootWindow * _blankingWindow;
    CADisplay * _caDisplay;
    bool  _connectionCompleted;
    FBSDisplayConfiguration * _currentConfiguration;
    unsigned long long  _currentDeactivationReasons;
    SBDisplayAssertionPreferences * _currentDisplayAssertionPreferences;
    SBDisplayAssertion * _displayAssertion;
    BSAtomicSignal * _displayDisconnectedSignal;
    FBSDisplayIdentity * _displayIdentity;
    SBDisplayManager * _displayManager;
    NSObject<OS_dispatch_queue> * _displayMutationQueue;
    bool  _hasEnqueuedPresentationUpdate;
    <FBSDisplayLayoutPublishing> * _layoutPublisher;
    NSMutableArray * _pendingWork;
    <SBSceneHostingDisplayControllerPolicy> * _policy;
    BSAtomicSignal * _presentationUpdateInvalidationSignal;
    FBSDisplayConfiguration * _presentedConfiguration;
    BSAtomicSignal * _readyToTransformDisplaysSignal;
    SBSceneManager * _sceneManager;
    <BSInvalidatable> * _stateCaptureAssertion;
    BSAtomicSignal * _updateTransactionInvalidator;
    FBWorkspaceEventQueue * _workspaceEventQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createBlankingWindowWithConfiguration:(id)arg1;
- (id)_createDisplayAssertionPreferences;
- (id)_createPresentationBinderWithConfiguration:(id)arg1;
- (id)_createUpdateTransactionWithLabel:(id)arg1;
- (void)_enqueueEvaluateAndApplyPresentationUpdate;
- (void)_ensureCADisplayUpToDate:(id)arg1 completion:(id /* block */)arg2;
- (void)_runRootTransaction:(id)arg1 withLabel:(id)arg2 completion:(id /* block */)arg3;
- (void)_runRootUpdateTransactionWithLabel:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendBlankingWindowToFront:(bool)arg1;
- (void)_updateBlankingWindowIfNecessary;
- (void)_updateLayoutPublisherIfNecessary;
- (void)_updatePolicyForPresentation:(id /* block */)arg1;
- (void)_updatePresentationBinderIfNecessary;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayManager:(id)arg3 sceneManager:(id)arg4 caDisplayQueue:(id)arg5 assertion:(id)arg6;
- (id)createTransactionForTransitionRequest:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)displayAssertion:(id)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertion:(id)arg1 didReceiveNewDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (id)initWithWorkspaceEventQueue:(id)arg1 policy:(id)arg2;
- (bool)isConnected;
- (id)layoutPublisher;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)requestUpdate:(unsigned long long)arg1;
- (id)signpostDescription;
- (void)transformDisplayConfiguration:(id)arg1 withBuilder:(id)arg2;

@end
