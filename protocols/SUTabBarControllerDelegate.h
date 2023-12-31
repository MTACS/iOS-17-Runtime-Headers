
@protocol SUTabBarControllerDelegate <UITabBarControllerDelegate>

@optional

- (SUViewController *)tabBarController:(SUTabBarController *)arg1 rootViewControllerForSection:(SUSection *)arg2;
- (bool)tabBarController:(SUTabBarController *)arg1 shouldShowSection:(SUSection *)arg2;
- (SUViewController *)tabBarController:(SUTabBarController *)arg1 viewControllerForContext:(SUViewControllerContext *)arg2;

@end
