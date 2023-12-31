
@interface SBPIPController : NSObject <SBAlertItemsControllerObserver, SBAssistantObserver, SBExternalDisplayServiceObserver, SBIdleTimerProviding, SBLayoutStateTransitionObserver, SBPIPContainerViewControllerInteractionObserver, SBPIPContainerViewControllerObserver, SBPIPControllerAdapterContextProviding, SBPIPMorphAnimatorControllerDelegate, SBSensorActivityObserver, SBWorkspaceKeyboardFocusControllerObserver> {
    <SBPIPControllerAdapter> * _adapter;
    unsigned int  _adapterWants_didAddContainerViewController;
    unsigned int  _adapterWants_didCancelPictureInPictureCallback;
    unsigned int  _adapterWants_didStartPictureInPictureCallback;
    unsigned int  _adapterWants_enhancedWindowingEnabled;
    unsigned int  _adapterWants_morphAnimatorDataSourceForMorphAnimatorController;
    unsigned int  _adapterWants_preventStashAssertions;
    unsigned int  _adapterWants_willBeginPIPInterruptionForAssertion;
    unsigned int  _adapterWants_willEndPIPInterruptionForAssertion;
    unsigned int  _adapterWants_willRemoveContainerViewController;
    unsigned int  _adapterWants_willRestorePictureInPictureForTestForApplication;
    unsigned int  _adapterWants_willStartPictureInPictureTestActionForApplication;
    unsigned int  _adapterWants_windowLevelChanged;
    unsigned int  _adapterWants_windowVisibilityChanged;
    NSString * _bundleIDForAppAnimatingPIPStartInBackground;
    NSString * _bundleIDForAppRecentlyStoppingPIP;
    NSMutableDictionary * _cameraInterruptionAssertions;
    NSHashTable * _connectedWindowScenes;
    NSMapTable * _containerViewControllerToContextMap;
    bool  _defaultToStashed;
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
    <BSInvalidatable> * _fullscreenModalElementInsetOverrideAssertion;
    bool  _hasIdleTimerBehaviors;
    <SBIdleTimerCoordinating> * _idleTimerCoordinator;
    SBIdleTimerCoordinatorHelper * _idleTimerCoordinatorHelper;
    unsigned long long  _inFlightWindowSceneUpdates;
    SBPIPInteractionSettings * _interactionSettings;
    NSHashTable * _interruptionAssertions;
    SBPIPInterruptionDebouncingTimer * _interruptionEndDebouncingTimer;
    bool  _isReducingResourcesUsage;
    <BSInvalidatable> * _keyboardFocusObserver;
    UIView * _keyboardInsetsVisualizerView;
    NSMutableSet * _pictureInPictureMorphAnimatorControllers;
    NSMutableSet * _pictureInPictureWindowHiddenReasons;
    SBPIPStashAssertion * _stashForInterruptionAssertion;
    <BSInvalidatable> * _stateCaptureInvalidatable;
    SBPIPStashAssertion * _transitionStashAssertion;
    long long  _unlockedEnvironmentModeWhenKeyboardFocusChanged;
    double  _windowLevel;
    SBWindowSceneManager * _windowSceneManager;
    NSMapTable * _windowSceneToInsetAssertionMap;
    NSMapTable * _windowSceneToStashAssertionsMap;
    NSMapTable * _windowSceneToWindowMarginsMap;
}

@property (nonatomic, readonly) long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isHandlingContextWindowSceneUpdate, nonatomic, readonly) bool handlingContextWindowSceneUpdate;
@property (nonatomic, readonly) bool hasIdleTimerBehaviors;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *hostedAppSceneHandles;
@property (getter=isPresentingPictureInPictureRequiringMedusaKeyboard, nonatomic, readonly) bool presentingPictureInPictureRequiringMedusaKeyboard;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowSceneManager *windowSceneManager;

- (void).cxx_destruct;
- (bool)_acquirePIPStashAssertionIfNecessaryForTransitionContext:(id)arg1 onWindowScene:(id)arg2;
- (id)_acquireStashAssertionForWindowScene:(id)arg1 withReason:(long long)arg2 identifier:(id)arg3 customAllowedEnvironmentModes:(id)arg4;
- (void)_addPictureInPictureMorphAnimatorController:(id)arg1;
- (id)_allContainerViewControllers;
- (void)_cancelInterruptionDebouncingTimer;
- (bool)_connectedWindowScenesIncludesExternalDisplay;
- (id)_contextForContainerViewController:(id)arg1;
- (id)_contextForContainerViewController:(id)arg1 creatingWithWindowSceneIfNeeded:(id)arg2;
- (id)_createNewWindowForContainerViewController:(id)arg1 onWindowScene:(id)arg2;
- (void)_edgeInsetsDidChangeOnWindowScene:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForSource:(long long)arg1 onWindowScene:(id)arg2 exists:(bool*)arg3;
- (void)_enumerateContextsForWindowScene:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_hasStashAssertionForWindowScene:(id)arg1;
- (bool)_isContentViewAlignedLeftWithPosition:(unsigned long long)arg1 orientation:(long long)arg2;
- (bool)_isContentViewAlignedTopWithPosition:(unsigned long long)arg1 orientation:(long long)arg2;
- (bool)_isPointInsidePictureInPictureContent:(struct CGPoint { double x1; double x2; })arg1 onWindowScene:(id)arg2;
- (id)_leadingWindowForWindowScene:(id)arg1;
- (void)_lockStateDidChange:(id)arg1;
- (void)_managePictureInPictureWindowVisibilityForWindowScene:(id)arg1 animated:(bool)arg2;
- (void)_minimumStashedPaddingDidChangeOnWindowScene:(id)arg1;
- (void)_moveContext:(id)arg1 toWindowScene:(id)arg2;
- (id)_overrideInsetsOnWindowScene:(id)arg1 forReason:(id)arg2 identifier:(id)arg3;
- (void)_performWithoutAnimation:(id /* block */)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pictureInPictureWindowMarginsOnWindowScene:(id)arg1;
- (void)_relinquishPIPStashAssertionIfNecessaryForTransitionContext:(id)arg1;
- (void)_removePictureInPictureMorphAnimatorController:(id)arg1;
- (void)_restorePictureInPictureForTestForApplicationWithBundleIdentifier:(id)arg1;
- (void)_setAdapter:(id)arg1;
- (void)_setAlpha:(double)arg1 forWindowsOnWindowScene:(id)arg2;
- (void)_setContainersStashed:(bool)arg1 forWindowScene:(id)arg2;
- (void)_setHidden:(bool)arg1 forWindowsOnWindowScene:(id)arg2;
- (void)_setWindowsLevel:(double)arg1 forWindowsOnWindowScene:(id)arg2;
- (bool)_shouldStashForTransitionContext:(id)arg1 onWindowScene:(id)arg2;
- (void)_startPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg1;
- (void)_updateContainerViewControllersContentPaddingOnWindowScene:(id)arg1;
- (void)_updateHyperregionComposers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_updatePictureInPictureOverlayInsetsOnWindowScene:(id)arg1 withCurrentLayoutState:(bool)arg2 toInterfaceOrientation:(long long)arg3 shouldUpdate:(bool)arg4;
- (void)_updateZStackIfNeededForDisappearingContainerViewController:(id)arg1;
- (void)_visualizeKeyboardFrameIfNeeded;
- (void)_windowSceneDidConnect:(id)arg1;
- (void)_windowSceneDidDisconnect:(id)arg1;
- (id)_windowScenesDisplayingPIPContent;
- (id)acquireInterruptionAssertionForReason:(long long)arg1 identifier:(id)arg2;
- (id)acquireInterruptionAssertionForReason:(long long)arg1 identifier:(id)arg2 cameraSensorBundleIdentifier:(id)arg3;
- (id)acquireStashAssertionForWindowScene:(id)arg1 withReason:(long long)arg2 identifier:(id)arg3;
- (void)activityDidChangeForSensorActivityDataProvider:(id)arg1;
- (void)addContainerViewController:(id)arg1 dataSource:(id)arg2;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (id)anyContentViewPresentedOnWindowScene:(id)arg1;
- (void)assistantDidDisappear:(id)arg1 windowScene:(id)arg2;
- (void)assistantWillAppear:(id)arg1 windowScene:(id)arg2;
- (void)bringTetheredContentToFrontOnWindowScene:(id)arg1;
- (void)cancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2;
- (id)connectedWindowScenes;
- (void)containerViewController:(id)arg1 didFinishStartAnimationWithInitialInterfaceOrientation:(long long)arg2;
- (void)containerViewController:(id)arg1 userDidUpdateStashState:(bool)arg2;
- (void)containerViewControllerDidBeginInteraction:(id)arg1;
- (void)containerViewControllerDidEndInteraction:(id)arg1 targetWindowScene:(id)arg2;
- (id)containerViewControllerForContentViewController:(id)arg1;
- (void)containerViewControllerUserMayUpdateStashState:(id)arg1;
- (id)containerViewControllersOnWindowScene:(id)arg1;
- (long long)contentType;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)createAndRegisterPictureInPictureMorphAnimatorControllerWithTargetProcessIdentifier:(int)arg1 uuid:(id)arg2 scenePersistenceIdentifier:(id)arg3 appLayout:(id)arg4 layoutRole:(long long)arg5 appLayoutBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 gestureInitiated:(bool)arg7 direction:(long long)arg8;
- (id)dataSourceForMorphAnimatorController:(id)arg1;
- (void)dealloc;
- (void)displayLayoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)endPIPInterruptionForAssertion:(id)arg1;
- (void)externalDisplayServiceDidUpdatePreferredDisplayArrangement:(id)arg1;
- (void)handleDestructionRequestForSceneHandles:(id)arg1;
- (bool)hasIdleTimerBehaviors;
- (void)hideContainersExcludingContainerForContentViewControllerAndTetheredOnes:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })homeScreenInitialPIPFrameForWindowScene:(id)arg1 withContentViewSize:(struct CGSize { double x1; double x2; })arg2 position:(unsigned long long)arg3 padding:(double)arg4 fromOrientation:(long long)arg5 toOrientation:(long long)arg6 shouldUpdate:(bool)arg7 gestureInitiated:(bool)arg8;
- (id)hostedAppSceneHandles;
- (id)initWithIdleTimerCoordinator:(id)arg1 windowLevel:(double)arg2 interactionSettings:(id)arg3 adapter:(id)arg4;
- (void)invalidateIdleTimerBehaviors;
- (bool)isHandlingContextWindowSceneUpdate;
- (bool)isPictureInPictureWindowVisibleOnWindowScene:(id)arg1;
- (bool)isPresentingPictureInPictureRequiringMedusaKeyboard;
- (bool)isStoppingOrCancellingPictureInPictureForApplicationWithBundleIdentifier:(id)arg1 scenePersistenceIdentifier:(id)arg2;
- (void)keyboardFocusController:(id)arg1 externalSceneDidAcquireFocus:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)morphAnimatorControllerDidTerminate:(id)arg1;
- (id)pictureInPictureMorphAnimatorControllerForProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pictureInPictureWindowMarginsOnWindowScene:(id)arg1;
- (void)prepareContainerViewControllerForHidingContentViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;
- (void)restoreContentViewController:(id)arg1 appSceneEntity:(id)arg2 morphAnimatorConfigurationBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setEnhancedWindowingModeEnabled:(bool)arg1 windowScene:(id)arg2;
- (void)setPictureInPictureWindowsHidden:(bool)arg1 forReason:(id)arg2;
- (void)setWindowSceneManager:(id)arg1;
- (bool)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2;
- (void)showAllContentOnWindowScene:(id)arg1 animated:(bool)arg2;
- (void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)arg1;
- (void)updatePictureInPictureWindowLevelForWindowScene:(id)arg1;
- (void)updateZStackParticipantPreferencesIfNeeded:(id)arg1 windowScene:(id)arg2;
- (double)windowLevelForWindowScene:(id)arg1;
- (id)windowSceneManager;

@end
