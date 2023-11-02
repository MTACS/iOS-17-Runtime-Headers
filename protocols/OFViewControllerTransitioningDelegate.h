
@protocol OFViewControllerTransitioningDelegate <NSObject>

@optional

- (<OFViewControllerAnimatedTransitioning> *)animationControllerForDismissedController:(OFUIViewController *)arg1;
- (<OFViewControllerAnimatedTransitioning> *)animationControllerForPresentedController:(OFUIViewController *)arg1 presentingController:(OFUIViewController *)arg2 sourceController:(OFUIViewController *)arg3;
- (<OFViewControllerInteractiveTransitioning> *)interactionControllerForDismissal:(id <OFViewControllerAnimatedTransitioning>)arg1;
- (<OFViewControllerInteractiveTransitioning> *)interactionControllerForPresentation:(id <OFViewControllerAnimatedTransitioning>)arg1;

@end
