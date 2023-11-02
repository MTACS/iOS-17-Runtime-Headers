
@interface CSEnhancedModalButton : UIButton {
    UIVisualEffectView * _effectView;
    UIView * _highlightedView;
}

- (void).cxx_destruct;
- (void)_addBackgroundHighlightView;
- (void)_addVisualEffect;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
