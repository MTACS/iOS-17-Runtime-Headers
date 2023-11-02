
@interface PLViewControllerEdgeAnimator : PLViewControllerAnimator

+ (bool)drivesAnimation;

- (void)_animateTransitionToEdge:(unsigned long long)arg1 withTransitionContext:(id)arg2;
- (id)_newPropertyAnimator;
- (void)_performTransitionWithContext:(id)arg1;

@end
