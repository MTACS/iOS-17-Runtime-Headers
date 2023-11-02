
@protocol _UISliderVisualElement <UISliderStyle>

@required

- (void)_controlTouchBegan:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)_controlTouchEnded:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)_controlTouchMoved:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)beginTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (bool)continueTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (UIImageView *)createThumbView;
- (UIImage *)currentMaximumTrackImage;
- (UIImage *)currentMinimumTrackImage;
- (UIImage *)currentThumbImage;
- (UISliderDataModel *)data;
- (void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;
- (void)didPerformLayout;
- (void)didSetContinuous;
- (void)didSetEnabled;
- (void)didSetHighlighted;
- (void)didSetMaximumTrackImageForState:(unsigned long long)arg1;
- (void)didSetMaximumTrackImageForStates;
- (void)didSetMaximumTrackTintColor;
- (void)didSetMaximumValueImage;
- (void)didSetMinimumTrackImageForState:(unsigned long long)arg1;
- (void)didSetMinimumTrackImageForStates;
- (void)didSetMinimumTrackTintColor;
- (void)didSetMinimumValueImage;
- (void)didSetSelected;
- (void)didSetShowValue;
- (void)didSetThumbEnabled;
- (void)didSetThumbImageForState:(unsigned long long)arg1;
- (void)didSetThumbImageForStates;
- (void)didSetThumbTintColor;
- (void)didSetValues;
- (void)didUpdateConfiguration;
- (void)didUpdateTraitCollection;
- (void)endTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (bool)isAnimatingValueChange;
- (UIView *)maxTrackView;
- (UIImageView *)maxValueImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (UIView *)minTrackView;
- (UIImageView *)minValueImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setData:(UISliderDataModel *)arg1;
- (void)setSlider:(UISlider *)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (UISlider *)slider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })thumbHitEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (UIView *)thumbView;
- (UIView *)thumbViewNeue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@optional

- (void)didSetUserInteractionEnabled;
- (bool)overriddenTrackingState;

@end
