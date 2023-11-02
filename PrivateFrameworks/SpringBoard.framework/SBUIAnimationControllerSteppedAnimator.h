
@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning> {
    SBAnimationStepper * _stepper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBAnimationStepper *stepper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)initWithAnimationController:(id)arg1;
- (id)initWithAnimationController:(id)arg1 stepper:(id)arg2;
- (double)percentComplete;
- (id)stepper;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;

@end
