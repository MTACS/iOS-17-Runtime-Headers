
@interface AFUISiriCarPlayFullScreenBackgroundView : UIView {
    UIImageView * _auraView;
    UIView * _backgroundView;
    UIVisualEffectView * _effectView;
}

- (void).cxx_destruct;
- (void)_setupAuraBackdropViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateVisibility:(bool)arg1;

@end
