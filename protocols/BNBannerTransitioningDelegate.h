
@protocol BNBannerTransitioningDelegate <UIViewControllerTransitioningDelegate>

@required

- (<UIViewControllerAnimatedTransitioning> *)animationControllerForDismissedController:(UIViewController *)arg1 userInfo:(NSDictionary *)arg2;
- (<UIViewControllerAnimatedTransitioning> *)animationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3 userInfo:(NSDictionary *)arg4;

@optional

- (<UIViewControllerAnimatedTransitioning> *)animationControllerForResizingController:(UIViewController *)arg1 userInfo:(NSDictionary *)arg2;
- (bool)isResizeAnimationCustomizationPermitted;
- (void)setResizeAnimationCustomizationPermitted:(bool)arg1;

@end
