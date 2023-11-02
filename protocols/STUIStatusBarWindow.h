
@protocol STUIStatusBarWindow <NSObject>

@required

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBounds;

- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animationParameters:(UIStatusBarOrientationAnimationParameters *)arg2;
- (void)setStatusBar:(STUIStatusBar_Wrapper *)arg1;
- (STUIStatusBar_Wrapper *)statusBar;
- (void)windowSceneDidConnect:(SBWindowScene *)arg1;

@optional

- (bool)_isStatusBarWindow;

@end
