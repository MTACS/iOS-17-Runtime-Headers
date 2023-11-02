
@interface UIKeyboardCameraOverlayPresentationController : UIKeyboardCameraBasePresentationController {
    UIKeyboardCameraGrabberView * _grabberView;
    bool  _isLandscape;
    double  _keyboardCameraFullScreenHeight;
    double  _keyboardCameraHeight;
    double  _keyboardCameraNormalHeight;
    UIPanGestureRecognizer * _panGestureRecognizer;
    double  _panningStartingHeight;
    NSLayoutConstraint * _topLayoutConstraint;
}

- (void).cxx_destruct;
- (void)_determinePortraitHeights;
- (void)_handlePan:(id)arg1;
- (void)_installGrabber;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (bool)updatesGuideDuringRotation;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
