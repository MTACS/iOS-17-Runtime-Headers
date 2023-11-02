
@interface UIKeyboardCameraPadPresentationController : UIKeyboardCameraBasePresentationController <UIViewControllerAnimatedTransitioning> {
    UIDimmingView * _dimmingView;
    <UIDimmingViewDelegate> * _dimmingViewDelegate;
    <_UIAssertion> * _keyboardSuppressionAssertion;
    UIView * _shadowView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UIDimmingViewDelegate> *dimmingViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePresentTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)dimmingViewDelegate;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (int)overrideTextEffectsVisibilityLevelForTransitionView:(id)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)setDimmingViewDelegate:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (bool)updatesGuideDuringRotation;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
