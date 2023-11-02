
@interface PKCompactNavigationContainerControllerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    PKCompactNavigationContainerController * _presentedVC;
    UIView * _presentedView;
    bool  _presenting;
    UIViewController * _presentingVC;
    UIView * _presentingView;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateWithTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
