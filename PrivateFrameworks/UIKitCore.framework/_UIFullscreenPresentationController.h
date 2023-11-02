
@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {
    double  _counterRotatedAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _counterRotatedOriginalBounds;
    UIView * _counterRotatedView;
    bool  _disableAnimatedReenablingOfAutorotation;
    id /* block */  _finalRotationBlock;
    _UIForcedOrientationTransactionToken * _forcedOrientationToken;
    long long  _originalOrientation;
    bool  _presentingViewControllerHandledCounterRotation;
}

- (void).cxx_destruct;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (void)_applyCounterRotationToView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)_inheritsPresentingViewControllerThemeLevel;
- (bool)_invokesDelegatesOnOrientationChange;
- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(bool)arg5;
- (void)_prepareForMixedOrientationTransitionIfNecessaryInWindow:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_removeCounterRotationIfApplied;
- (void)_setPresentedViewController:(id)arg1;
- (bool)_shouldAnimateReenablingOfAutorotation;
- (bool)_shouldRespectDefinesPresentationContext;
- (void)_transitionDidEnd:(bool)arg1 isDismissal:(bool)arg2;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (bool)shouldPresentInFullscreen;

@end
