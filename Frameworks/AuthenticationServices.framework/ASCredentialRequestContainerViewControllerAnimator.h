
@interface ASCredentialRequestContainerViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (readonly) Class superclass;

- (id)_viewControllerForTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)init;
- (id)initWithPresenting:(bool)arg1;
- (bool)isPresenting;
- (double)transitionDuration:(id)arg1;

@end
