
@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning> {
    <SBFramewiseInteractiveTransitionAnimatorDelegate> * _delegate;
    double  _percentComplete;
    bool  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFramewiseInteractiveTransitionAnimatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double percentVisible;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)delegate;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (bool)isPresenting;
- (double)percentComplete;
- (double)percentVisible;
- (void)setDelegate:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (bool)supportsRestarting;
- (double)transitionDuration:(id)arg1;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;

@end
