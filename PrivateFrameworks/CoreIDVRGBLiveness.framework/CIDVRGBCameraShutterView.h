
@interface CIDVRGBCameraShutterView : UIView {
    double  _borderWidth;
    UIColor * _fillColor;
    id /* block */  _onShutterPress;
    bool  _pressed;
    UIImpactFeedbackGenerator * _shutterHapticFeedbackGenerator;
    UIColor * _strokeColor;
}

@property (nonatomic, copy) id /* block */ onShutterPress;
@property (nonatomic) bool pressed;

- (void).cxx_destruct;
- (void)_drawArcInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_drawConcentricCirclesIn:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setupGestureRecognizer;
- (void)_setupHapticFeedback;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_triggerPressEvent:(id)arg1;
- (void)_triggerShutterHaptics;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id /* block */)onShutterPress;
- (bool)pressed;
- (void)setOnShutterPress:(id /* block */)arg1;
- (void)setPressed:(bool)arg1;

@end
