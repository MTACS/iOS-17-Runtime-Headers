
@protocol PUTransitionViewAnimatorDelegate <NSObject>

@optional

- (void)transitionViewAnimatorDidEnd:(PUTransitionViewAnimator *)arg1 finished:(bool)arg2;
- (void)transitionViewAnimatorDidUpdate:(PUTransitionViewAnimator *)arg1;
- (void)transitionViewAnimatorWillEnd:(PUTransitionViewAnimator *)arg1 withTargetTranslation:(inout struct CGPoint { double x1; double x2; }*)arg2;

@end
