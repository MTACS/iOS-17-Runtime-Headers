
@interface UIStatusBarWindow : UIWindow {
    long long  _orientation;
    UIStatusBar * _statusBar;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBounds;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBoundsForOrientation:(long long)arg1;
+ (bool)_isSystemWindow;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarWindowFrame;

- (void).cxx_destruct;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneBoundsForOrientation:(long long)arg1;
- (void)_didMoveFromScene:(id)arg1 toScene:(id)arg2;
- (bool)_isStatusBarWindow;
- (void)_rotate;
- (bool)_shouldAdjustSizeClassesAndResizeWindow;
- (bool)_shouldForceTraitPropagationThroughHierarchy;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarFrameForOrientation:(long long)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)orientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarWindowFrame;

@end
