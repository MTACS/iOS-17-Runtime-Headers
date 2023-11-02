
@protocol UIViewControllerTransitioningDelegate <NSObject>

@optional

- (<UIViewControllerAnimatedTransitioning> *)animationControllerForDismissedController:(UIViewController *)arg1;
- (<UIViewControllerAnimatedTransitioning> *)animationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3;
- (<UIViewControllerInteractiveTransitioning> *)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (<UIViewControllerInteractiveTransitioning> *)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3;

@end
