
@interface SeymourUI.PopTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    void isPresenting;
    void scale;
}

- (void)animateTransition:(id)arg1;
- (id)init;
- (double)transitionDuration:(id)arg1;

@end
