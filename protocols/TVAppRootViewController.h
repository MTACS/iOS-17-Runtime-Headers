
@protocol TVAppRootViewController <NSObject>

@required

- (<IKAppNavigationController> *)appNavigationController;
- (IKAppTabBar *)appTabBar;
- (UINavigationController *)currentNavigationController;
- (UIViewController *)currentViewController;
- (void)setAppNavigationControllersDelegate:(id <_TVAppNavigationControllerDelegate>)arg1;

@end
