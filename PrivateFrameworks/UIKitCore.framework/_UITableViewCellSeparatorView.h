
@interface _UITableViewCellSeparatorView : UIView {
    UIView * _backgroundView;
    bool  _drawsWithVibrantLightMode;
    UIVisualEffectView * _effectView;
    UIView * _overlayView;
    UIVisualEffect * _separatorEffect;
}

@property (nonatomic) bool drawsWithVibrantLightMode;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;

- (void).cxx_destruct;
- (bool)drawsWithVibrantLightMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)separatorEffect;
- (void)setDrawsWithVibrantLightMode:(bool)arg1;
- (void)setSeparatorEffect:(id)arg1;

@end
