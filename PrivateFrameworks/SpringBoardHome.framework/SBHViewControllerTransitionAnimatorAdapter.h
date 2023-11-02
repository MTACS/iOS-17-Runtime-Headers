
@interface SBHViewControllerTransitionAnimatorAdapter : NSObject <SBViewControllerReversibleAnimatedTransitioning> {
    <SBHViewControllerTransitionAnimating> * _animator;
    unsigned long long  _transitionToken;
}

@property (nonatomic, readonly) <SBHViewControllerTransitionAnimating> *animator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transitionToken;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)animator;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)initWithAnimator:(id)arg1;
- (void)setTransitionToken:(unsigned long long)arg1;
- (bool)supportsRestarting;
- (double)transitionDuration:(id)arg1;
- (unsigned long long)transitionToken;

@end
