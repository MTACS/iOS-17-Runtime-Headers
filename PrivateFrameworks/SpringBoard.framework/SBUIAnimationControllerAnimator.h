
@interface SBUIAnimationControllerAnimator : NSObject <SBViewControllerAnimatedTransitioning> {
    SBUIAnimationController * _animationController;
}

@property (nonatomic, readonly) SBUIAnimationController *animationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)animationController;
- (id)init;
- (id)initWithAnimationController:(id)arg1;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
