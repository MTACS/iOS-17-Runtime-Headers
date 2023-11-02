
@interface WFCompactPlatterPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (readonly) Class superclass;

- (void)_animateDismissalWithTransitionContext:(id)arg1;
- (void)_animatePresentationWithTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initForPresenting:(bool)arg1;
- (bool)isPresenting;
- (double)transitionDuration:(id)arg1;

@end
