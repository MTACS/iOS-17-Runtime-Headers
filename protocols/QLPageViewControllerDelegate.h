
@protocol QLPageViewControllerDelegate <UIPageViewControllerDelegate>

@optional

- (void)pageViewController:(QLPageViewController *)arg1 didCancelTransitionFromPage:(UIViewController *)arg2 withIndex:(unsigned long long)arg3 toPage:(UIViewController *)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;
- (void)pageViewController:(QLPageViewController *)arg1 didTransitionFromPage:(UIViewController *)arg2 withIndex:(unsigned long long)arg3 toPage:(UIViewController *)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;
- (void)pageViewController:(QLPageViewController *)arg1 isTransitioningFromPage:(UIViewController *)arg2 withIndex:(unsigned long long)arg3 toPage:(UIViewController *)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;
- (UIView *)pageViewController:(QLPageViewController *)arg1 parallaxViewInPage:(UIViewController *)arg2 withIndex:(unsigned long long)arg3;
- (void)pageViewController:(QLPageViewController *)arg1 willBeginInteractiveTransitionFromPage:(UIViewController *)arg2 withIndex:(unsigned long long)arg3 toPage:(UIViewController *)arg4 withIndex:(unsigned long long)arg5;
- (void)pageViewController:(QLPageViewController *)arg1 willCancelTransitionFromPage:(UIViewController *)arg2 withIndex:(unsigned long long)arg3 toPage:(UIViewController *)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;
- (void)pageViewController:(QLPageViewController *)arg1 willTransitionFromPage:(UIViewController *)arg2 withIndex:(unsigned long long)arg3 toPage:(UIViewController *)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;

@end
