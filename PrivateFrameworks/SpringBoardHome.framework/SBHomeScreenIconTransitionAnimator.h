
@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning> {
    SBNestingViewController * _childViewController;
    unsigned long long  _currentOperation;
    SBHIconAnimationSettings * _currentSettings;
    <SBHomeScreenIconTransitionAnimatorDelegate> * _delegate;
    SBIconAnimator * _iconAnimator;
    double  _initialDelay;
    bool  _needsTransitionTokenIncrementOnNextUpdate;
    unsigned long long  _operation;
    bool  _receivedFirstInteractiveUpdate;
    <SBViewControllerContextTransitioning> * _transitionContext;
    unsigned long long  _transitionToken;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) SBNestingViewController *childViewController;
@property (nonatomic, readonly) unsigned long long currentOperation;
@property (nonatomic, readonly) SBHIconAnimationSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHomeScreenIconTransitionAnimatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconAnimator *iconAnimator;
@property (nonatomic) double initialDelay;
@property (nonatomic, readonly) unsigned long long operation;
@property (getter=wasRestarted, nonatomic, readonly) bool restarted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)cancel;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)childViewController;
- (void)completeImmediately;
- (unsigned long long)currentOperation;
- (id)currentSettings;
- (id)delegate;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)iconAnimator;
- (bool)iconAnimator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(id /* block */)arg2;
- (void)iconAnimatorWasInvalidated:(id)arg1;
- (id)initWithIconAnimator:(id)arg1 childViewController:(id)arg2 operation:(unsigned long long)arg3;
- (double)initialDelay;
- (bool)isCancelled;
- (unsigned long long)operation;
- (double)percentComplete;
- (void)restart;
- (void)reverse;
- (void)setDelegate:(id)arg1;
- (void)setInitialDelay:(double)arg1;
- (bool)supportsRestarting;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (bool)wasRestarted;

@end
