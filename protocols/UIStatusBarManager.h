
@protocol UIStatusBarManager <NSObject>

@required

- (bool)statusBar:(UIStatusBar_Base *)arg1 shouldRequestStyle:(long long)arg2 animationParameters:(UIStatusBarStyleAnimationParameters *)arg3 forced:(bool)arg4;
- (bool)statusBar:(UIStatusBar_Base *)arg1 shouldRequestStyleAttributes:(UIStatusBarStyleAttributes *)arg2 animationParameters:(UIStatusBarStyleAnimationParameters *)arg3 forced:(bool)arg4;
- (bool)statusBar:(UIStatusBar_Base *)arg1 shouldSetAlpha:(double)arg2;

@end
