
@interface PKCancelingAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    id /* block */  _cancelationHandler;
    bool  _completed;
    UIViewController * _presentedVC;
    UIView * _presentedView;
    UIViewController * _presentingVC;
    UIView * _presentingView;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic, copy) id /* block */ cancelationHandler;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_updateWithTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id /* block */)cancelationHandler;
- (void)setCancelationHandler:(id /* block */)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (bool)wantsInteractiveStart;

@end
