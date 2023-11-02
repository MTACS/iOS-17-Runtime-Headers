
@interface NCLongLookDefaultPresentationController : PLExpandedPlatterPresentationController {
    MTMaterialView * _backgroundMaterialView;
    bool  _presenting;
    UIViewController * _sourceViewController;
}

@property (nonatomic) <NCLongLookDefaultPresentationControllerDelegate> *presentationControllerDelegate;
@property (getter=isPresenting, nonatomic) bool presenting;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (bool)_shouldPresentInCurrentContext;
- (bool)_shouldRespectDefinesPresentationContext;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (bool)isPresenting;
- (void)presentationTransitionWillBegin;
- (void)setPresenting:(bool)arg1;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;

@end
