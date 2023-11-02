
@protocol NUArticleViewStyler

@required

- (UIColor *)mainBackgroundColor;
- (long long)statusBarStyle;
- (void)styleTabBar:(UITabBar *)arg1;
- (void)styleToolbar:(UIToolbar *)arg1;
- (long long)topBackgroundStatusBarStyle;
- (UIColor *)topContentColor;
- (void)unstyleTabBar:(UITabBar *)arg1 overrideRestoreColor:(UIColor *)arg2;
- (void)unstyleToolbar:(UIToolbar *)arg1 overrideRestoreColor:(UIColor *)arg2;

@end
