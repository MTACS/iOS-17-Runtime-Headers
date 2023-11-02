
@protocol SUUITabBarControllerDelegate <NSObject>

@optional

- (void)tabBarController:(UIViewController<SUUITabBarController> *)arg1 didEndDisplayingViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SUUITabBarController> *)arg1 didReselectViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SUUITabBarController> *)arg1 didSelectViewController:(UIViewController *)arg2;
- (bool)tabBarController:(UIViewController<SUUITabBarController> *)arg1 shouldFallbackToRootForController:(UIViewController *)arg2;
- (bool)tabBarController:(UIViewController<SUUITabBarController> *)arg1 shouldSelectViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SUUITabBarController> *)arg1 willDisplayViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SUUITabBarController> *)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(UIViewController<SUUITabBarController> *)arg1;

@end
