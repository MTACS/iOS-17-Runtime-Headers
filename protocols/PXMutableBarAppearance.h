
@protocol PXMutableBarAppearance <NSObject>

@required

- (long long)barAppearancePreferredStatusBarStyle;
- (UIColor *)navigationBarTintColor;
- (bool)prefersNavigationBarVisible;
- (bool)prefersStatusBarVisible;
- (bool)prefersTabBarVisible;
- (bool)prefersToolbarVisible;
- (void)setBarAppearancePreferredStatusBarStyle:(long long)arg1;
- (void)setNavigationBarTintColor:(UIColor *)arg1;
- (void)setPrefersNavigationBarVisible:(bool)arg1;
- (void)setPrefersStatusBarVisible:(bool)arg1;
- (void)setPrefersTabBarVisible:(bool)arg1;
- (void)setPrefersToolbarVisible:(bool)arg1;

@end
