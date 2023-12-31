
@protocol UIPageViewControllerDataSource <NSObject>

@required

- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;

@optional

- (long long)presentationCountForPageViewController:(UIPageViewController *)arg1;
- (long long)presentationIndexForPageViewController:(UIPageViewController *)arg1;

@end
