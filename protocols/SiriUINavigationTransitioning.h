
@protocol SiriUINavigationTransitioning <SiriUINavigationAnimationCoordinating>

@optional

- (<UIViewControllerAnimatedTransitioning> *)animationController;
- (<UIViewControllerInteractiveTransitioning> *)interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg1;

@end
