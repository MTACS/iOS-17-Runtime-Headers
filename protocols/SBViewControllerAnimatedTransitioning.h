
@protocol SBViewControllerAnimatedTransitioning <UIViewControllerAnimatedTransitioning>

@required

- (void)animateTransition:(id <SBViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <SBViewControllerContextTransitioning>)arg1;

@optional

- (BSUIAnimationFactory *)transitionAnimationFactory:(id <SBViewControllerContextTransitioning>)arg1;
- (unsigned long long)transitionAnimationOptions:(id <SBViewControllerContextTransitioning>)arg1;

@end
