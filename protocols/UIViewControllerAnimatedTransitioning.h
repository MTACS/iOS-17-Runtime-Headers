
@protocol UIViewControllerAnimatedTransitioning <NSObject>

@required

- (void)animateTransition:(id <UIViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <UIViewControllerContextTransitioning>)arg1;

@optional

- (void)animationEnded:(bool)arg1;
- (<UIViewImplicitlyAnimating> *)interruptibleAnimatorForTransition:(id <UIViewControllerContextTransitioning>)arg1;

@end
