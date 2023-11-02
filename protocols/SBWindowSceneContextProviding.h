
@protocol SBWindowSceneContextProviding <NSObject>

@required

- (SBAlertItemsController *)alertItemsController;
- (SBAmbientPresentationController *)ambientPresentationController;
- (SBDisplayAppInteractionEventSource *)appInteractionEventSource;
- (<SBAssistantSceneControlling> *)assistantController;
- (BNBannerController *)bannerController;
- (SBControlCenterController *)controlCenterController;
- (SBCoverSheetPresentationManager *)coverSheetPresentationManager;
- (CSCoverSheetViewController *)coverSheetViewController;
- (<FBSDisplayLayoutPublishing> *)displayLayoutPublisher;
- (SBFloatingDockController *)floatingDockController;
- (SBMainDisplayLayoutStateManager *)layoutStateManager;
- (SBSceneLayoutStateProvider *)layoutStateProvider;
- (SBLayoutStateTransitionCoordinator *)layoutStateTransitionCoordinator;
- (SBLockScreenManager *)lockScreenManager;
- (SBLockedPointerManager *)lockedPointerManager;
- (SBMedusaHostedKeyboardWindowController *)medusaHostedKeyboardWindowController;
- (SBModalAlertPresentationCoordinator *)modalAlertPresentationCoordinator;
- (SBModalLibraryController *)modalLibraryController;
- (SBModalUIFluidDismissGestureManager *)modalUIFluidDismissGestureManager;
- (SBWindowScenePIPManager *)pictureInPictureManager;
- (SBReachabilitySceneController *)reachabilityController;
- (SBRecordingIndicatorManager *)recordingIndicatorManager;
- (SBSceneManager *)sceneManager;
- (SBSwitcherController *)switcherController;
- (SBSystemApertureController *)systemApertureController;
- (SBSystemGestureManager *)systemGestureManager;
- (SBSystemPointerInteractionManager *)systemPointerInteractionManager;
- (TRAArbiter *)traitsArbiter;
- (SBTraitsPipelineManager *)traitsPipelineManager;
- (<SBTransientOverlayPresenting> *)transientOverlayPresenter;
- (SBTransientUIInteractionManager *)transientUIInteractionManager;
- (<SBUILockStateProviding> *)uiLockStateProvider;
- (SBWallpaperController *)wallpaperController;
- (SBWindowHidingManager *)windowHidingManager;
- (SBFZStackResolver *)zStackResolver;

@end
