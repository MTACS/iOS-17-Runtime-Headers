
@interface SBWorkspaceTransaction : SBTransaction {
    bool  _clearsCompletionAsynchronously;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    SBSceneManager * _sceneManager;
    SBUIAnimationController * _suggestedAnimationController;
    SBWorkspaceTransitionRequest * _transitionRequest;
    SBWorkspaceTransitionRequest * _transitionRequestForPendingInterruption;
    SBWindowScene * _windowScene;
}

@property (nonatomic) bool clearsCompletionAsynchronously;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (nonatomic, readonly) SBSceneManager *sceneManager;
@property (nonatomic, retain) SBUIAnimationController *suggestedAnimationController;
@property (nonatomic, readonly) SBWorkspaceTransitionRequest *transitionRequest;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_childWorkspaceTransactions;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didInterruptForTransitionRequest:(id)arg1;
- (bool)_isInterruptingForTransitionRequest;
- (void)_performDeviceCoherencyCheck;
- (id)_transitionRequestForInterruption;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (bool)clearsCompletionAsynchronously;
- (id)displayConfiguration;
- (id)displayIdentity;
- (id)init;
- (id)initWithTransitionRequest:(id)arg1;
- (void)interceptTransitionRequest:(id)arg1;
- (void)interruptForTransitionRequest:(id)arg1;
- (bool)isMainDisplayTransaction;
- (void)keepAliveForAsyncBlock:(id /* block */)arg1;
- (id)layoutStateTransitionCoordinator;
- (id)sceneManager;
- (void)setClearsCompletionAsynchronously:(bool)arg1;
- (void)setSuggestedAnimationController:(id)arg1;
- (bool)shouldInterceptTransitionRequest:(id)arg1;
- (id)suggestedAnimationController;
- (id)transitionRequest;
- (id)windowScene;

@end
