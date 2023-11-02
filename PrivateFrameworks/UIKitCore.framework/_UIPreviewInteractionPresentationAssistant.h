
@interface _UIPreviewInteractionPresentationAssistant : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    <UIViewControllerContextTransitioning> * _currentContext;
    id /* block */  _dismissalCompletion;
    _UIPreviewInteractionHighlighter * _highlighter;
    bool  _isAppearing;
    _UIPreviewInteractionViewControllerPresentation * _presentation;
    UIViewPropertyAnimator * _presentationAnimator;
    _UIPortalView * _presentationSourcePortalView;
    UITargetedPreview * _sourcePreview;
    UIViewController * _stashedParentViewController;
    UIView * _stashedSuperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalCompletion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIPreviewInteractionHighlighter *highlighter;
@property (nonatomic) bool isAppearing;
@property (nonatomic, retain) _UIPreviewInteractionViewControllerPresentation *presentation;
@property (nonatomic, readonly) UIViewPropertyAnimator *presentationAnimator;
@property (nonatomic, retain) _UIPortalView *presentationSourcePortalView;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;
@property (nonatomic, retain) UIViewController *stashedParentViewController;
@property (nonatomic, retain) UIView *stashedSuperView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_createpresentationAnimatorIfNecessary:(id)arg1;
- (void)_postInteractionCleanup;
- (id)_sourcePreviewPortal;
- (void)_stashParentViewControllerIfNecessary;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissViewController;
- (id /* block */)dismissalCompletion;
- (id)highlighter;
- (id)initWithViewControllerPresentation:(id)arg1;
- (bool)isAppearing;
- (void)presentFromViewController:(id)arg1 sourcePreview:(id)arg2 dismissalCompletion:(id /* block */)arg3;
- (id)presentation;
- (id)presentationAnimator;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentationSourcePortalView;
- (void)setDismissalCompletion:(id /* block */)arg1;
- (void)setHighlighter:(id)arg1;
- (void)setIsAppearing:(bool)arg1;
- (void)setPresentation:(id)arg1;
- (void)setPresentationSourcePortalView:(id)arg1;
- (void)setSourcePreview:(id)arg1;
- (void)setStashedParentViewController:(id)arg1;
- (void)setStashedSuperView:(id)arg1;
- (id)sourcePreview;
- (id)stashedParentViewController;
- (id)stashedSuperView;
- (double)transitionDuration:(id)arg1;

@end
