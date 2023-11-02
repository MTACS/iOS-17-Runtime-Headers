
@interface SBStatusBarWindow : UIWindow <STUIStatusBarWindow> {
    long long  _orientation;
    STUIStatusBar_Wrapper * _statusBar;
    _SBStatusBarWindowRootViewController * _statusBarWindowRootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) STUIStatusBar_Wrapper *statusBar;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBounds;
+ (bool)_isSystemWindow;

- (void).cxx_destruct;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (id)_initWithOrientation:(long long)arg1;
- (bool)_isStatusBarWindow;
- (void)_rotate;
- (void)_setStatusBarWindowOrientation:(long long)arg1;
- (bool)_shouldAdjustSizeClassesAndResizeWindow;
- (bool)_shouldForceTraitPropagationThroughHierarchy;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarWindowBoundsForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarWindowFrame;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)orientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;
- (void)windowSceneDidConnect:(id)arg1;

@end
