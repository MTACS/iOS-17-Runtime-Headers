
@protocol AVTransitionDriver <UIInteraction>

@required

- (double)angleOfVelocityInWindow;
- (UIPanGestureRecognizer *)contentTransitioningViewGestureRecognizer;
- (bool)isEnabled;
- (bool)lastNonZeroVelocityWasDownward;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (double)pinchScale;
- (double)pinchVelocity;
- (double)rotation;
- (double)rotationVelocity;
- (void)setContentTransitioningViewGestureRecognizer:(UIPanGestureRecognizer *)arg1;
- (void)setTransitionDriverDelegate:(id <AVTransitionDriverDelegate>)arg1;
- (bool)transitionDriver:(id <AVTransitionDriver>)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
- (<AVTransitionDriverDelegate> *)transitionDriverDelegate;
- (long long)transitionInteraction;
- (struct CGPoint { double x1; double x2; })translationInWindow;
- (struct CGPoint { double x1; double x2; })velocityInWindow;

@end
