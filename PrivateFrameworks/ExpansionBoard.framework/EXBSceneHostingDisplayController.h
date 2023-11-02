
@interface EXBSceneHostingDisplayController : NSObject <EXBDisplayControlling, EXBDisplayEndpointHostComponentDelegate> {
    _UIRootWindow * _blankingWindow;
    CADisplay * _caDisplay;
    NSObject<OS_dispatch_queue> * _caDisplayMutationQueue;
    FBSDisplayConfiguration * _currentConfiguration;
    unsigned long long  _currentDeactivationReasons;
    EXBDisplayAssertionPreferences * _currentDisplayAssertionPreferences;
    unsigned long long  _deactivationReasonsWhenActive;
    <EXBSceneHostingDisplayControllerDelegate> * _delegate;
    EXBDisplayTransformDescriptor * _descriptor;
    EXBDisplayAssertion * _displayAssertion;
    BSAtomicSignal * _displayDisconnectedSignal;
    FBSDisplayIdentity * _displayIdentity;
    <EXBDisplayTransformUpdating> * _displayUpdater;
    bool  _hasEnqueuedUpdate;
    FBSDisplayConfigurationRequest * _initialDisplayConfigurationRequest;
    EXBRootWindowScenePresentationBinder * _presentationBinder;
    BSAtomicSignal * _presentationUpdateInvalidationSignal;
    NSObject<OS_dispatch_queue> * _presentationUpdateQueue;
    FBSDisplayConfiguration * _presentedConfiguration;
    unsigned long long  _priorityLevel;
    BSAtomicSignal * _readyToTransformDisplaysSignal;
    UIRootSceneWindow * _rootWindow;
    FBScene * _scene;
    FBSSceneSpecification * _sceneSpecification;
    FBSceneWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EXBSceneHostingDisplayControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_CADisplayModeCriteriaFromRequest:(id)arg1;
- (id)_FBSDisplayConfigurationRequest;
- (id)_createBlankingWindowWithConfiguration:(id)arg1;
- (id)_createDisplayAssertionPreferences;
- (id)_createRootWindow;
- (void)_enqueueEvaluateAndApplyPresentationUpdate;
- (void)_ensureCADisplayUpToDate:(id)arg1 completion:(id /* block */)arg2;
- (id)_hostComponent;
- (struct CGSize { double x1; double x2; })_logicalScaleForFBSRequest:(id)arg1 CADisplay:(id)arg2;
- (void)_sendBlankingWindowToFront:(bool)arg1;
- (void)_updateBlankingWindowIfNecessary;
- (void)_updateHostComponentIfNecessary:(id /* block */)arg1;
- (void)_updatePresentationBinderIfNecessary;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayTransformUpdater:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5;
- (id)delegate;
- (void)displayAssertion:(id)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertion:(id)arg1 didReceiveNewDeactivationReasons:(unsigned long long)arg2 previousDeactivationReasons:(unsigned long long)arg3;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1 previousDeactivationReasons:(unsigned long long)arg2;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (void)endpoint:(id)arg1 didChangeDisplayArrangementItem:(id)arg2;
- (void)endpoint:(id)arg1 didChangeDisplayConfigurationRequest:(id)arg2;
- (void)endpoint:(id)arg1 didChangeWantsControlOfDisplay:(bool)arg2;
- (void)endpoint:(id)arg1 modifyInitialSceneParameters:(id)arg2;
- (id)initWithPriority:(unsigned long long)arg1 descriptor:(id)arg2 sceneSpecification:(id)arg3 workspace:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)transformDisplayConfigurationWithBuilder:(id)arg1;

@end
