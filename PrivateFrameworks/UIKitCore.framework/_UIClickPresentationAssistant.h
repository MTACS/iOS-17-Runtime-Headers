
@interface _UIClickPresentationAssistant : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, _UIClickPresentationAssisting> {
    <UIViewControllerContextTransitioning> * _currentContext;
    unsigned long long  _currentState;
    UIViewPropertyAnimator * _presentationAnimator;
    _UIPortalView * _presentationSourcePortalView;
    UITargetedPreview * _sourcePreview;
    UIViewController * _stashedParentViewController;
    UIView * _stashedSuperView;
    id /* block */  _transitionCompletion;
    id /* block */  lifecycleCompletion;
    _UIClickPresentation * presentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ lifecycleCompletion;
@property (nonatomic, retain) _UIClickPresentation *presentation;
@property (nonatomic, readonly) UIViewPropertyAnimator *presentationAnimator;
@property (nonatomic, retain) _UIPortalView *presentationSourcePortalView;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;
@property (nonatomic, retain) UIViewController *stashedParentViewController;
@property (nonatomic, retain) UIView *stashedSuperView;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transitionCompletion;

- (void).cxx_destruct;
- (void)_animateDismissalIsInterruption:(bool)arg1;
- (void)_animatePresentation;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg1 isAppearing:(bool)arg2;
- (void)_didTransitionToDismissingFromState:(unsigned long long)arg1;
- (void)_didTransitionToPossibleEndingTransition:(bool)arg1;
- (void)_didTransitionToPresented;
- (void)_didTransitionToPresenting;
- (void)_postInteractionCleanup;
- (id)_sourcePreviewPortal;
- (void)_stashParentViewControllerIfNecessary;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)initWithClickPresentation:(id)arg1;
- (id /* block */)lifecycleCompletion;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(id /* block */)arg2;
- (id)presentation;
- (id)presentationAnimator;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentationSourcePortalView;
- (void)setLifecycleCompletion:(id /* block */)arg1;
- (void)setPresentation:(id)arg1;
- (void)setPresentationSourcePortalView:(id)arg1;
- (void)setSourcePreview:(id)arg1;
- (void)setStashedParentViewController:(id)arg1;
- (void)setStashedSuperView:(id)arg1;
- (void)setTransitionCompletion:(id /* block */)arg1;
- (id)sourcePreview;
- (id)stashedParentViewController;
- (id)stashedSuperView;
- (id /* block */)transitionCompletion;
- (double)transitionDuration:(id)arg1;

@end
