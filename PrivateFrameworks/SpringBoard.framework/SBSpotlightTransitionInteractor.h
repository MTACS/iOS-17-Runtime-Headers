
@interface SBSpotlightTransitionInteractor : NSObject <SBViewControllerInteractiveTransitioning> {
    <UIViewControllerAnimatedTransitioning> * _animator;
    long long  _completionCurve;
    double  _completionSpeed;
    <SBViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic) long long completionCurve;
@property (nonatomic) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)cancelTransition;
- (long long)completionCurve;
- (double)completionSpeed;
- (void)finishInteractiveTransition;
- (id)init;
- (id)initWithAnimator:(id)arg1;
- (void)setCompletionCurve:(long long)arg1;
- (void)setCompletionSpeed:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)updateTransition:(double)arg1;

@end
