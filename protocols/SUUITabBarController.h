
@protocol SUUITabBarController <NSObject>

@required

- (NSArray *)allViewControllers;
- (<SUUITabBarControllerDelegate> *)delegate;
- (long long)forcedUserInterfaceStyle;
- (void)hideBarWithTransition:(int)arg1;
- (unsigned long long)selectedIndex;
- (UIViewController *)selectedViewController;
- (void)setDelegate:(id <SUUITabBarControllerDelegate>)arg1;
- (void)setForcedUserInterfaceStyle:(long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedViewController:(UIViewController *)arg1;
- (void)setTransientViewController:(UIViewController *)arg1;
- (void)setTransientViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (void)setViewControllers:(NSArray *)arg1;
- (void)setViewControllers:(NSArray *)arg1 animated:(bool)arg2;
- (void)showBarWithTransition:(int)arg1;
- (UIView *)tabBar;
- (UIViewController *)transientViewController;
- (NSArray *)viewControllers;

@optional

- (UIViewController *)floatingOverlayViewController;
- (UINavigationController *)moreNavigationController;
- (void)setFloatingOverlayViewController:(UIViewController *)arg1 animated:(bool)arg2;

@end
