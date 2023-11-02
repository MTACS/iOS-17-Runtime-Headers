
@interface SBAssistantContext : NSObject {
    SBAlertItemsController * _alertItemsController;
    SBControlCenterController * _controlCenterController;
    SBCoverSheetPresentationManager * _coverSheetPresentationManager;
    CSCoverSheetViewController * _coverSheetViewController;
    <FBSDisplayLayoutPublishing> * _displayLayoutPublisher;
    SBFloatingDockController * _floatingDockController;
    SBIconController * _iconController;
    <SBLockScreenEnvironment> * _lockScreenEnvironment;
    SBLockScreenManager * _lockScreenManager;
    SBModalAlertPresentationCoordinator * _modalAlertPresentationCoordinator;
    <SBAssistantOrientationAccomodating> * _orientationAccomodation;
    SBSwitcherController * _switcherController;
    SBSystemApertureController * _systemApertureController;
    SBSystemGestureManager * _systemGestureManager;
    TRAArbiter * _traitsArbiter;
    <SBTransientOverlayPresenting> * _transientOverlayPresenter;
    SBWallpaperController * _wallpaperController;
    SBWindowHidingManager * _windowHidingManager;
    SBFZStackResolver * _zStackResolver;
}

@property (nonatomic, retain) SBAlertItemsController *alertItemsController;
@property (nonatomic, retain) SBControlCenterController *controlCenterController;
@property (nonatomic, retain) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (nonatomic, retain) CSCoverSheetViewController *coverSheetViewController;
@property (nonatomic, retain) <FBSDisplayLayoutPublishing> *displayLayoutPublisher;
@property (nonatomic, retain) SBFloatingDockController *floatingDockController;
@property (nonatomic, retain) SBIconController *iconController;
@property (nonatomic, retain) <SBLockScreenEnvironment> *lockScreenEnvironment;
@property (nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic, retain) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (nonatomic, retain) <SBAssistantOrientationAccomodating> *orientationAccomodation;
@property (nonatomic, retain) SBSwitcherController *switcherController;
@property (nonatomic, retain) SBSystemApertureController *systemApertureController;
@property (nonatomic, retain) SBSystemGestureManager *systemGestureManager;
@property (nonatomic, retain) TRAArbiter *traitsArbiter;
@property (nonatomic, retain) <SBTransientOverlayPresenting> *transientOverlayPresenter;
@property (nonatomic, retain) SBWallpaperController *wallpaperController;
@property (nonatomic, retain) SBWindowHidingManager *windowHidingManager;
@property (nonatomic, retain) SBFZStackResolver *zStackResolver;

+ (id)contextForWindowScene:(id)arg1;

- (void).cxx_destruct;
- (id)alertItemsController;
- (id)controlCenterController;
- (id)coverSheetPresentationManager;
- (id)coverSheetViewController;
- (id)displayLayoutPublisher;
- (id)floatingDockController;
- (id)iconController;
- (id)lockScreenEnvironment;
- (id)lockScreenManager;
- (id)modalAlertPresentationCoordinator;
- (id)orientationAccomodation;
- (void)setAlertItemsController:(id)arg1;
- (void)setControlCenterController:(id)arg1;
- (void)setCoverSheetPresentationManager:(id)arg1;
- (void)setCoverSheetViewController:(id)arg1;
- (void)setDisplayLayoutPublisher:(id)arg1;
- (void)setFloatingDockController:(id)arg1;
- (void)setIconController:(id)arg1;
- (void)setLockScreenEnvironment:(id)arg1;
- (void)setLockScreenManager:(id)arg1;
- (void)setModalAlertPresentationCoordinator:(id)arg1;
- (void)setOrientationAccomodation:(id)arg1;
- (void)setSwitcherController:(id)arg1;
- (void)setSystemApertureController:(id)arg1;
- (void)setSystemGestureManager:(id)arg1;
- (void)setTraitsArbiter:(id)arg1;
- (void)setTransientOverlayPresenter:(id)arg1;
- (void)setWallpaperController:(id)arg1;
- (void)setWindowHidingManager:(id)arg1;
- (void)setZStackResolver:(id)arg1;
- (id)switcherController;
- (id)systemApertureController;
- (id)systemGestureManager;
- (id)traitsArbiter;
- (id)transientOverlayPresenter;
- (id)wallpaperController;
- (id)windowHidingManager;
- (id)zStackResolver;

@end
