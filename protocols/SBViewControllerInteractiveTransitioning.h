
@protocol SBViewControllerInteractiveTransitioning <UIViewControllerInteractiveTransitioning, SBViewControllerPercentDrivenTransitionUpdating, SBViewControllerReversibleTransitioning>

@required

- (void)finishInteractiveTransition;
- (void)startInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1;

@end
