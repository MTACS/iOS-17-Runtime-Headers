
@protocol OFViewControllerAnimatedTransitioning <NSObject>

@required

- (void)animateTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1;
- (double)transitionDurationWithContext:(id <OFViewControllerTransitioningContext>)arg1;

@optional

- (void)animationEnded:(bool)arg1;

@end
