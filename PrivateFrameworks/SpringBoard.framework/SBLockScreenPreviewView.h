
@interface SBLockScreenPreviewView : UIView {
    SBUICallToActionLabel * _callToActionLabel;
    SBUILegibilityView * _cameraView;
    CSPageControl * _dashBoardPageControl;
    SBFLockScreenDateView * _dateView;
    SBFLockScreenDateViewController * _dateViewController;
    SBHomeGrabberView * _homeGrabberView;
    _UILegibilitySettings * _legibilitySettings;
    SBUIProudLockIconView * _proudLockIconView;
    CSQuickActionsView * _quickActionsView;
    _UILegibilityLabel * _slideToUnlockLegibilityLabel;
    UILabel * _slideToUnlockView;
    UIStatusBar * _statusBar;
    SBWallpaperController * _wallpaperController;
    UIView * _wallpaperView;
}

- (void).cxx_destruct;
- (void)_layoutCallToActionLabel;
- (void)_layoutDateView;
- (void)_layoutHomeGrabberView;
- (void)_layoutPageControl;
- (void)_layoutProudLockIconView;
- (void)_layoutQuickActionsView;
- (void)_layoutStatusBar;
- (void)_layoutWallpaperView;
- (void)_setupCallToActionLabel;
- (void)_setupDateViewWithOptions:(unsigned long long)arg1;
- (void)_setupHomeGrabberView;
- (void)_setupPageControl;
- (void)_setupProudLockIconView;
- (void)_setupQuickActionView;
- (void)_setupStatusBar;
- (void)_setupWallpaperViewWithImage:(id)arg1;
- (id)_statusBarReusePool;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperController:(id)arg2 options:(unsigned long long)arg3 wallpaperImage:(id)arg4;
- (void)layoutSubviews;

@end
