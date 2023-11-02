
@interface SFMagicHeadPlaceholderView : UIView {
    SFMagicHeadCircleView * _backgroundView;
    UIVisualEffectView * _backgroundVisualEffectView;
    bool  _canShowArrow;
    UIVisualEffectView * _contentVisualEffectView;
    UIImageView * _imageView;
    UILabel * _label;
    bool  _titledTooFarColor;
    bool  _useNoUWBCapableLabel;
    bool  _useRaiseLabel;
}

- (void).cxx_destruct;
- (double)alpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (void)setTiltedTooFarColor:(bool)arg1 useRaiseLabel:(bool)arg2 useNoUWBCapableLabel:(bool)arg3;
- (void)updateForCurrentState;

@end
