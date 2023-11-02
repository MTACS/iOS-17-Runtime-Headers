
@protocol _UIStatusBarAnimationProviding <NSObject>

@required

- (UIStatusBarHideAnimationParameters *)_preferredStatusBarHideAnimationParameters;
- (UIStatusBarStyleAnimationParameters *)_preferredStatusBarStyleAnimationParameters;
- (long long)preferredStatusBarUpdateAnimation;

@end
