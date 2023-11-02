
@protocol SBApplicationSceneViewControlling <SBSceneViewControlling>

@required

- (<SBApplicationSceneViewControllingStatusBarDelegate> *)applicationSceneStatusBarDelegate;
- (long long)overrideStatusBarStyle;
- (SBApplicationSceneHandle *)sceneHandle;
- (void)setApplicationSceneStatusBarDelegate:(id <SBApplicationSceneViewControllingStatusBarDelegate>)arg1;
- (double)statusBarAlpha;

@end
