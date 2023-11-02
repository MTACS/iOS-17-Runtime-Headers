
@interface SBSystemNotesManager : NSObject <MCProfileConnectionObserver, PTSettingsKeyPathObserver, SBSSystemNotesPresentationClientToServerInterface, SBSystemNotesContentViewControllerDelegate, SBSystemNotesInteractionManagerDataSource, SBSystemNotesInteractionManagerDelegate, SBSystemNotesPresentationRequestServerDelegate> {
    SBApplicationController * _applicationController;
    SBPIPContentViewLayoutSettings * _contentViewLayoutSettings;
    NSMutableDictionary * _displaysToScreenshotFlashWindows;
    NSCountedSet * _displaysWithPendingScreenshots;
    FBSceneManager * _fbSceneManager;
    BSAbsoluteMachTimer * _interactionLoggingTimer;
    SBSystemNotesInteractionManager * _interactionManager;
    unsigned long long  _interactionRequests;
    __UIKeyboardArbiterManager * _keyboardArbiterManager;
    SBKeyboardDismissalManager * _keyboardDismissalManager;
    SBKeyboardSuppressionManager * _keyboardSuppressionManager;
    NSString * _launchBundleID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_connections;
    MCProfileConnection * _managedProfileConnection;
    <BSInvalidatable> * _pegasusWindowLevelAssertion;
    SBPIPController * _pipController;
    SBSystemNotesSettings * _pipSettings;
    BSServiceConnection * _presentedConnection;
    SBPIPSceneContentContainerAdapter * _presentedContainerAdapter;
    SBPIPSceneContentAdapter * _sceneContentAdapter;
    UIApplicationSceneDeactivationManager * _sceneDeactivationManager;
    SBMainDisplaySceneManager * _sceneManager;
    FBSSceneSpecification * _sceneSpecification;
    SBSystemNotesPresentationRequestServer * _systemNotesRequestServer;
    PTTestRecipe * _systemNotesTestRecipe;
    SBMainWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addContentViewControllerToPIPHierarchy:(id)arg1 contentViewLayoutSettings:(id)arg2;
- (id)_createContentViewControllerForPresentationContext:(id)arg1 error:(id*)arg2;
- (long long)_currentPresentationMode;
- (void)_dismissNotesWithReason:(unsigned long long)arg1;
- (void)_dismissNotesWithReason:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)_handleCreateNoteRequestWithMode:(long long)arg1 presentationSource:(unsigned long long)arg2;
- (bool)_handleCreateNoteRequestWithPresentationContext:(id)arg1 error:(id*)arg2;
- (id)_presentedContainerViewController;
- (id)_presentedNotesContentViewController;
- (void)_reloadLaunchBundleID;
- (id)_sceneBundleIdentifierForNewConfiguration;
- (id)_sceneHandleForApplication:(id)arg1 sceneSpecification:(id)arg2;
- (void)_setPresentedConnection:(id)arg1;
- (void)_tearDownContainerViewControllerForSceneHandle:(id)arg1;
- (oneway void)activateConfiguration:(id)arg1;
- (void)contentViewController:(id)arg1 didChangeToPresentationMode:(long long)arg2;
- (void)contentViewController:(id)arg1 didReceiveScreenshotRequestForDisplays:(id)arg2 completion:(id /* block */)arg3;
- (void)contentViewControllerDidReceiveTapToExpand:(id)arg1;
- (void)contentViewControllerWantsDismissal:(id)arg1 forReason:(unsigned long long)arg2 animated:(bool)arg3;
- (id)currentContentViewLayoutSettingsForInteractionManager:(id)arg1;
- (long long)currentPresentationModeForInteractionManager:(id)arg1;
- (void)dealloc;
- (id)initWithControllerCoordinator:(id)arg1 workspace:(id)arg2 sceneManager:(id)arg3 keyboardArbiterManager:(id)arg4 fbSceneManager:(id)arg5 sceneDeactivationManager:(id)arg6 keyboardSuppressionManager:(id)arg7 keyboardDismissalManager:(id)arg8 applicationController:(id)arg9 systemGestureManager:(id)arg10 systemPointerInteractionManager:(id)arg11 idleTimerCoordinator:(id)arg12 managedProfileConnection:(id)arg13;
- (void)interactionManager:(id)arg1 requestsNotesDismissalForSource:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)interactionManager:(id)arg1 requestsPresentationWithContext:(id)arg2;
- (void)interactionManager:(id)arg1 requestsStartSuppressingKeyboardForReason:(id)arg2;
- (id)interactionManager:(id)arg1 requestsStashAssertionForReason:(id)arg2;
- (void)interactionManager:(id)arg1 requestsStopSuppressingKeyboardForReason:(id)arg2;
- (void)interactionManager:(id)arg1 requestsUpdatePresentationMode:(long long)arg2;
- (id)launchApplicationIdentityForInteractionManager:(id)arg1;
- (id)launchBundleIDForInteractionManager:(id)arg1;
- (oneway void)presentWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)presentedContainerViewControllerForInteractionManager:(id)arg1;
- (id)presentedPIPContentViewControllerForInteractionManager:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)server:(id)arg1 connectionDidInvalidate:(id)arg2;
- (id)server:(id)arg1 targetForNewClientConnection:(id)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)showOrHideForKeyCommand:(id)arg1;

@end
