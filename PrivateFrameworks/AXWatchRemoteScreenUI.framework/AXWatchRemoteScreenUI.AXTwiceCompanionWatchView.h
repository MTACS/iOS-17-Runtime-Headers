
@interface AXWatchRemoteScreenUI.AXTwiceCompanionWatchView : UIView {
    void $__lazy_storage_$_watchDeviceSpinner;
    void hasStingSupport;
    void isCrownOrientationOnRightSide;
    void leftConstraint;
    void leftPadding;
    void mirroringLayer;
    void rightContraint;
    void rightPadding;
    void swipeDownCrownGesture;
    void swipeUpCrownGesture;
    void watchChromeView;
    void watchCrownButton;
    void watchCrownButtonHorizontalConstraint;
    void watchCrownButtonTopConstraint;
    void watchRendererView;
    void watchRendererViewLeftConstraint;
    void watchRendererViewRightConstraint;
    void watchSideButton;
    void watchSideButtonHorizontalConstraint;
    void watchSideButtonTopConstraint;
    void watchStingButton;
    void watchStingButtonHorizontalConstraint;
    void watchStingButtonTopConstraint;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)digitalCrownAXLongPressed:(id)arg1;
- (bool)digitalCrownButtonScrollDown:(id)arg1;
- (bool)digitalCrownButtonScrollUp:(id)arg1;
- (void)digitalCrownButtonTappedWithSender:(id)arg1;
- (bool)digitalCrownDirectTouch:(id)arg1;
- (void)digitalCrownLongPressedWithGesture:(id)arg1;
- (void)digitalCrownSwipeDownWithGesture:(id)arg1;
- (void)digitalCrownSwipeUpWithGesture:(id)arg1;
- (void)doubleCrownButtonTappedWithSender:(id)arg1;
- (bool)doubleDigitalCrownButtonTapped:(id)arg1;
- (void)handleLongPressGestureWithGesture:(id)arg1 endBlock:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)sideButtonAXLongPressed:(id)arg1;
- (void)sideButtonLongPressedWithGesture:(id)arg1;
- (void)sideButtonTappedWithSender:(id)arg1;
- (bool)stingButtonAXKeycord:(id)arg1;
- (bool)stingButtonAXLongPressed:(id)arg1;
- (void)stingButtonLongPressedWithGesture:(id)arg1;
- (void)stingButtonTappedWithSender:(id)arg1;
- (void)tripleCrownButtonTappedWithSender:(id)arg1;
- (bool)tripleDigitalCrownButtonTapped:(id)arg1;

@end
