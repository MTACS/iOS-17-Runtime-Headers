
@interface PRXPurelyInteractiveTransition : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning> {
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (double)transitionDuration:(id)arg1;

@end
