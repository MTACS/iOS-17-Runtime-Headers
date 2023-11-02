
@interface PUPhotoEditShadowView : UIView {
    CAGradientLayer * _gradientMaskLayer;
    unsigned long long  _transparentSide;
    bool  _useVisualEffectView;
}

@property (nonatomic) unsigned long long transparentSide;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTransparentSide:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)transparentSide;
- (void)updateGradient;

@end
