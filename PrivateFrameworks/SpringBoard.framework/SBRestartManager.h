
@interface SBRestartManager : NSObject {
    <SBRestartManagerDelegate> * _delegate;
    SBInitialRestartState * _initialRestartState;
    bool  _isRestartImminent;
    bool  _isShuttingDown;
    NSMutableSet * _pendingExternallyControlledRestartReasons;
    SBRestartTransitionRequest * _pendingRestartTransitionRequest;
    SBStartupTransitionController * _startupController;
    FBSystemService * _systemService;
    <SBRestartManagerWorkspaceDataSource> * _workspaceDataSource;
}

@property (nonatomic) <SBRestartManagerDelegate> *delegate;
@property (getter=isPendingExit, nonatomic, readonly) bool pendingExit;
@property (nonatomic, readonly) SBRestartTransitionRequest *pendingRestartTransitionRequest;
@property (nonatomic, readonly) BSTransaction<SBStartupTransition> *startupTransition;

- (void).cxx_destruct;
- (void)___waitForeverForRunningBoardKill;
- (void)_addPendingExternallyControlledRestartReason:(id)arg1;
- (void)_doRestartForTransition:(int)arg1;
- (void)_exitIsImminent;
- (id)_initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2 startupController:(id)arg3 systemService:(id)arg4;
- (bool)_isPendingExitIncludingExternallyControlledReasons:(bool)arg1;
- (void)_killAllAppsForPendingExitWithReason:(long long)arg1 description:(id)arg2 expiration:(double)arg3 completion:(id /* block */)arg4;
- (void)_persistStartupTransitionContextFromRebootContext:(id)arg1;
- (void)_persistStartupTransitionContextFromRestartRequest:(id)arg1;
- (void)_persistStartupTransitionContextFromShutdownContext:(id)arg1;
- (void)_playShutdownSound:(id /* block */)arg1;
- (void)_postShutdownNotification;
- (void)_reallyRestartWithTransitionRequest:(id)arg1;
- (void)_removePendingExternallyControlledRestartReason:(id)arg1;
- (void)_restartWithTransitionRequest:(id)arg1;
- (void)_shutdownSoundDidComplete:(id)arg1 completion:(id /* block */)arg2;
- (void)_shutdownUsingOptions:(id)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithWorkspaceDataSource:(id)arg1 initialRestartState:(id)arg2;
- (void)initializeAndRunStartupTransition:(id /* block */)arg1;
- (bool)isPendingExit;
- (id)pendingRestartTransitionRequest;
- (void)rebootForReason:(id)arg1;
- (void)rebootWithContext:(id)arg1;
- (void)restartWithTransitionRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shutdownForReason:(id)arg1;
- (void)shutdownWithContext:(id)arg1;
- (id)startupTransition;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
