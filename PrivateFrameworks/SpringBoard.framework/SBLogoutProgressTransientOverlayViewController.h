
@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController <CSExternalBehaviorProviding> {
    <SBLogoutProgressDataSource> * _dataSource;
    SBLogoutDebugBlockingViewController * _debugTasksViewController;
    <SBLogoutProgressDelegate> * _delegate;
    SBMultiUserDefaults * _multiUserDefaults;
    SBPlatformController * _platformController;
    SBLogoutProgressView * _progressView;
    UMUser * _user;
    SBTransientOverlayWallpaperEffectView * _wallpaperEffectView;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic) <SBLogoutProgressDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBLogoutProgressDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UMUser *user;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_legibilitySettings;
- (bool)_supportsDebugUI;
- (void)_updateData;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateLegibility;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSExternalBehaviorProviding;
- (id)coverSheetIdentifier;
- (id)dataSource;
- (id)delegate;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)initWithUserAccount:(id)arg1;
- (bool)isContentOpaque;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)notificationBehavior;
- (long long)participantState;
- (long long)preferredStatusBarStyle;
- (void)prepareForRestart;
- (long long)proximityDetectionMode;
- (void)refreshData;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)user;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
