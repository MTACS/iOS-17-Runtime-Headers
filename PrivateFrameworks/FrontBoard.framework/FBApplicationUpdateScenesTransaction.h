
@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {
    FBSSceneClientIdentity * _clientIdentity;
    bool  _hasScheduledProcessLaunch;
    NSMutableArray * _pendingUpdateTransactions;
    FBApplicationProcessLaunchTransaction * _processLaunchTransaction;
    bool  _processLaunched;
    NSMutableArray * _updateSceneTransactions;
    bool  _waitsForSceneCommits;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBApplicationProcess *process;
@property (readonly) Class superclass;
@property (nonatomic) bool waitsForSceneCommits;

- (void).cxx_destruct;
- (bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_childTransactionDidFinishWork:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_didSatisfyMilestone:(id)arg1;
- (void)_executeProcessLaunchIfAppropriate;
- (void)_executeSceneUpdatesIfAppropriate;
- (bool)_isReadyToLaunch;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_willBegin;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)bundleID;
- (id)init;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(id /* block */)arg2;
- (id)initWithClientIdentity:(id)arg1 executionContextProvider:(id /* block */)arg2;
- (id)initWithProcessIdentity:(id)arg1 executionContextProvider:(id /* block */)arg2;
- (id)process;
- (void)removeObserver:(id)arg1;
- (void)setWaitsForSceneCommits:(bool)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)updateSceneTransactionDidCommitUpdate:(id)arg1;
- (void)updateSceneTransactionDidCreateScene:(id)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(id)arg1;
- (void)updateSceneTransactionWillUpdateScene:(id)arg1;
- (void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (bool)waitsForSceneCommits;

@end
