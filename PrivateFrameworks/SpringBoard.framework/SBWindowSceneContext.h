
@interface SBWindowSceneContext : NSObject <SBWindowSceneContextProviding, _UISceneComponentProviding> {
    SBAmbientPresentationController * _ambientPresentationController;
    <SBAssistantSceneControlling> * _assistantController;
    BNBannerController * _bannerController;
    <FBSDisplayLayoutPublishing> * _displayLayoutPublisher;
    SBFloatingDockController * _floatingDockController;
    SBMainDisplayLayoutStateManager * _layoutStateManager;
    SBSceneLayoutStateProvider * _layoutStateProvider;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    SBLockedPointerManager * _lockedPointerManager;
    SBMedusaHostedKeyboardWindowController * _medusaHostedKeyboardWindowController;
    SBModalLibraryController * _modalLibraryController;
    SBModalUIFluidDismissGestureManager * _modalUIFluidDismissGestureManager;
    SBWindowScenePIPManager * _pictureInPictureManager;
    SBReachabilitySceneController * _reachabilityController;
    SBRecordingIndicatorManager * _recordingIndicatorManager;
    SBWindowScene * _sbWindowScene;
    SBSceneManager * _sceneManager;
    SBSwitcherController * _switcherController;
    SBSystemApertureController * _systemApertureController;
    SBSystemGestureManager * _systemGestureManager;
    SBSystemPointerInteractionManager * _systemPointerInteractionManager;
    TRAArbiter * _traitsArbiter;
    SBTraitsPipelineManager * _traitsPipelineManager;
    SBTransientUIInteractionManager * _transientUIInteractionManager;
    <SBUILockStateProviding> * _uiLockStateProvider;
    SBWindowHidingManager * _windowHidingManager;
    SBFZStackResolver * _zStackResolver;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) SBAlertItemsController *alertItemsController;
@property (nonatomic, retain) SBAmbientPresentationController *ambientPresentationController;
@property (nonatomic, readonly) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (nonatomic, retain) <SBAssistantSceneControlling> *assistantController;
@property (nonatomic, readonly) BNBannerController *bannerController;
@property (nonatomic, readonly) SBControlCenterController *controlCenterController;
@property (nonatomic, readonly) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (nonatomic, readonly) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FBSDisplayLayoutPublishing> *displayLayoutPublisher;
@property (nonatomic, retain) SBFloatingDockController *floatingDockController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBMainDisplayLayoutStateManager *layoutStateManager;
@property (nonatomic, retain) SBSceneLayoutStateProvider *layoutStateProvider;
@property (nonatomic, retain) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (nonatomic, readonly) SBLockScreenManager *lockScreenManager;
@property (nonatomic, retain) SBLockedPointerManager *lockedPointerManager;
@property (nonatomic, readonly) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (nonatomic, readonly) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (nonatomic, retain) SBModalLibraryController *modalLibraryController;
@property (nonatomic, retain) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager;
@property (nonatomic, retain) SBWindowScenePIPManager *pictureInPictureManager;
@property (nonatomic, retain) SBReachabilitySceneController *reachabilityController;
@property (nonatomic, retain) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (nonatomic, retain) SBSceneManager *sceneManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBSwitcherController *switcherController;
@property (nonatomic, retain) SBSystemApertureController *systemApertureController;
@property (nonatomic, retain) SBSystemGestureManager *systemGestureManager;
@property (nonatomic, retain) SBSystemPointerInteractionManager *systemPointerInteractionManager;
@property (nonatomic, retain) TRAArbiter *traitsArbiter;
@property (nonatomic, retain) SBTraitsPipelineManager *traitsPipelineManager;
@property (nonatomic, readonly) <SBTransientOverlayPresenting> *transientOverlayPresenter;
@property (nonatomic, retain) SBTransientUIInteractionManager *transientUIInteractionManager;
@property (setter=setUILockStateProvider:, nonatomic, retain) <SBUILockStateProviding> *uiLockStateProvider;
@property (nonatomic, readonly) SBWallpaperController *wallpaperController;
@property (nonatomic, retain) SBWindowHidingManager *windowHidingManager;
@property (nonatomic, retain) SBFZStackResolver *zStackResolver;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)alertItemsController;
- (id)ambientPresentationController;
- (id)appInteractionEventSource;
- (id)assistantController;
- (id)bannerController;
- (id)controlCenterController;
- (id)coverSheetPresentationManager;
- (id)coverSheetViewController;
- (id)displayLayoutPublisher;
- (id)floatingDockController;
- (id)initWithScene:(id)arg1;
- (id)layoutStateManager;
- (id)layoutStateProvider;
- (id)layoutStateTransitionCoordinator;
- (id)lockScreenManager;
- (id)lockedPointerManager;
- (id)medusaHostedKeyboardWindowController;
- (id)modalAlertPresentationCoordinator;
- (id)modalLibraryController;
- (id)modalUIFluidDismissGestureManager;
- (id)pictureInPictureManager;
- (id)reachabilityController;
- (id)recordingIndicatorManager;
- (id)sceneManager;
- (void)setAmbientPresentationController:(id)arg1;
- (void)setAssistantController:(id)arg1;
- (void)setDisplayLayoutPublisher:(id)arg1;
- (void)setFloatingDockController:(id)arg1;
- (void)setLayoutStateManager:(id)arg1;
- (void)setLayoutStateProvider:(id)arg1;
- (void)setLayoutStateTransitionCoordinator:(id)arg1;
- (void)setLockedPointerManager:(id)arg1;
- (void)setModalLibraryController:(id)arg1;
- (void)setModalUIFluidDismissGestureManager:(id)arg1;
- (void)setPictureInPictureManager:(id)arg1;
- (void)setReachabilityController:(id)arg1;
- (void)setRecordingIndicatorManager:(id)arg1;
- (void)setSceneManager:(id)arg1;
- (void)setSwitcherController:(id)arg1;
- (void)setSystemApertureController:(id)arg1;
- (void)setSystemGestureManager:(id)arg1;
- (void)setSystemPointerInteractionManager:(id)arg1;
- (void)setTraitsArbiter:(id)arg1;
- (void)setTraitsPipelineManager:(id)arg1;
- (void)setTransientUIInteractionManager:(id)arg1;
- (void)setUILockStateProvider:(id)arg1;
- (void)setWindowHidingManager:(id)arg1;
- (void)setZStackResolver:(id)arg1;
- (id)switcherController;
- (id)systemApertureController;
- (id)systemGestureManager;
- (id)systemPointerInteractionManager;
- (id)traitsArbiter;
- (id)traitsPipelineManager;
- (id)transientOverlayPresenter;
- (id)transientUIInteractionManager;
- (id)uiLockStateProvider;
- (id)wallpaperController;
- (id)windowHidingManager;
- (id)zStackResolver;

@end
