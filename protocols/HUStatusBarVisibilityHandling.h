
@protocol HUStatusBarVisibilityHandling <NSObject>

@required

- (bool)isStatusBarHidden;
- (void)setStatusBarHidden:(bool)arg1 withAnimationSettings:(HUAnimationSettings *)arg2;

@end
