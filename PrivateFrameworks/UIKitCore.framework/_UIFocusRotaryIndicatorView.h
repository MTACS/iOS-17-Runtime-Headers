
@interface _UIFocusRotaryIndicatorView : UIView {
    unsigned long long  _activeAxis;
    _UIFocusRotaryRingArrowView * _downArrow;
    unsigned long long  _failedMovementHeading;
    UIView * _fingerPositionContainerView;
    UIView * _fingerPositionView;
    _UIFocusRotaryRingArrowView * _leftArrow;
    _UIFocusRotaryRingArrowView * _rightArrow;
    UIView * _ringView;
    UIViewPropertyAnimator * _rotaryScrubBackwardsFingerPositionAnimator;
    UIView * _rotaryScrubCenterPunchout;
    UIViewPropertyAnimator * _rotaryScrubHideAnimator;
    UIViewPropertyAnimator * _rotaryScrubUnhideAnimator;
    UIView * _roundPointerView;
    _UIFocusRotaryRingArrowView * _upArrow;
    bool  _visible;
    double  _wheelPosition;
}

+ (id)createRotaryIndicatorInView:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_calculateCurrentRotaryAxis;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForWheelPosition:(double)arg1;
- (void)_updateArrowDisplay;
- (void)_updateArrowsForCurrentFocus;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)showArrowsForAxis:(unsigned long long)arg1;
- (void)toggleVisible:(bool)arg1 animated:(bool)arg2;
- (void)updateFailedMovementHeading:(unsigned long long)arg1;
- (void)updateWheelPosition:(double)arg1;

@end
