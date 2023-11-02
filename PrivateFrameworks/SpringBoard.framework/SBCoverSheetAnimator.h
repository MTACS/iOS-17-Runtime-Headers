
@interface SBCoverSheetAnimator : NSObject {
    UIWindow * _coverSheetWindow;
    SBWindowSelfHostWrapper * _coverSheetWindowHostWrapper;
    SBFolderController * _folderController;
    UIWindow * _hostingWindow;
    SBIconZoomAnimator * _iconAnimator;
    SBSceneManager * _sceneManager;
    SBLockToAppStatusBarAnimator * _statusBarAnimator;
    UIWindow * _switcherWindow;
    bool  _transitioning;
    SBHUnlockSettings * _unlockSettings;
    SBWallpaperController * _wallpaperController;
}

@property (nonatomic) UIWindow *coverSheetWindow;
@property (nonatomic, retain) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper;
@property (nonatomic, retain) SBFolderController *folderController;
@property (nonatomic, retain) UIWindow *hostingWindow;
@property (nonatomic, retain) SBIconZoomAnimator *iconAnimator;
@property (nonatomic, retain) SBSceneManager *sceneManager;
@property (nonatomic, retain) SBLockToAppStatusBarAnimator *statusBarAnimator;
@property (nonatomic, retain) UIWindow *switcherWindow;
@property (getter=isTransitioning, nonatomic) bool transitioning;
@property (nonatomic, retain) SBHUnlockSettings *unlockSettings;
@property (nonatomic, retain) SBWallpaperController *wallpaperController;

- (void).cxx_destruct;
- (void)_prepareIconAnimatorIncludingLockScreen:(bool)arg1;
- (void)_setWallpaperToLocked:(bool)arg1 duration:(double)arg2;
- (void)_updateCoverSheetHosting;
- (void)animateToCoverSheet:(bool)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)coverSheetWindow;
- (id)coverSheetWindowHostWrapper;
- (id)folderController;
- (id)hostingWindow;
- (id)iconAnimator;
- (id)initWithCoverSheetWindow:(id)arg1 sceneManager:(id)arg2 hostingWindow:(id)arg3 switcherWindow:(id)arg4 wallpaperController:(id)arg5 folderController:(id)arg6 unlockSettings:(id)arg7;
- (bool)isTransitioning;
- (id)sceneManager;
- (void)setCoverSheetWindow:(id)arg1;
- (void)setCoverSheetWindowHostWrapper:(id)arg1;
- (void)setFolderController:(id)arg1;
- (void)setHostingWindow:(id)arg1;
- (void)setIconAnimator:(id)arg1;
- (void)setSceneManager:(id)arg1;
- (void)setStatusBarAnimator:(id)arg1;
- (void)setSwitcherWindow:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setUnlockSettings:(id)arg1;
- (void)setWallpaperController:(id)arg1;
- (id)statusBarAnimator;
- (id)switcherWindow;
- (id)unlockSettings;
- (id)wallpaperController;

@end
