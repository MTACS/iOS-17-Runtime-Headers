
@interface AFUISiriCompactDimmingView : UIView {
    bool  _isAnimatingBlur;
    bool  _isVisible;
}

- (bool)_isInAmbient;
- (bool)accessibilityReduceMotionEnabled;
- (id)ambientFadeToBlackView;
- (id)ambientMaterialView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;

@end
