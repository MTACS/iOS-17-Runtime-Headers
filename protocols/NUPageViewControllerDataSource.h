
@protocol NUPageViewControllerDataSource <NSObject>

@required

- (UIViewController *)pageViewController:(NUPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(NUPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;

@end
