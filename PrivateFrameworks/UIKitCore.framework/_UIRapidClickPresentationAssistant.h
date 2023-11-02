
@interface _UIRapidClickPresentationAssistant : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, _UIClickPresentationAssisting> {
    int  _animationCount;
    bool  _isInteractionInitiatedDismiss;
    id  _keyboardSuppressionAssertion;
    UITargetedPreview * _sourcePreview;
    id /* block */  lifecycleCompletion;
    _UIClickPresentation * presentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id keyboardSuppressionAssertion;
@property (nonatomic, copy) id /* block */ lifecycleCompletion;
@property (nonatomic, retain) _UIClickPresentation *presentation;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateDismissalWithReason:(unsigned long long)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_animateUsingFluidSpringWithType:(unsigned long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_nonAnimatedDismissalWithReason:(unsigned long long)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_performPresentationAnimationsFromViewController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)initWithClickPresentation:(id)arg1;
- (id)keyboardSuppressionAssertion;
- (id /* block */)lifecycleCompletion;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(id /* block */)arg2;
- (id)presentation;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setKeyboardSuppressionAssertion:(id)arg1;
- (void)setLifecycleCompletion:(id /* block */)arg1;
- (void)setPresentation:(id)arg1;
- (void)setSourcePreview:(id)arg1;
- (id)sourcePreview;
- (double)transitionDuration:(id)arg1;

@end
