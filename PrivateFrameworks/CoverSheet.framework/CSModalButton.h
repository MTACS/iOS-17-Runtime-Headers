
@interface CSModalButton : UIButton {
    UIColor * _backgroundColor;
    UIVisualEffectView * _effectView;
    bool  _isPressed;
}

@property (nonatomic, retain) UIVisualEffect *visualEffect;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisualEffect:(id)arg1;
- (id)visualEffect;

@end
