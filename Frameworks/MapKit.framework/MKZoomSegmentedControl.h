
@interface MKZoomSegmentedControl : UIView {
    struct CGImage { } * _backgroundMinusSelectedImage;
    struct CGImage { } * _backgroundPlusSelectedImage;
    struct CGImage { } * _backgroundUnselectedImage;
    CABackdropLayer * _blurLayer;
    CALayer * _displayLayer;
    struct CGImage { } * _maskImage;
    CALayer * _maskLayer;
}

- (void).cxx_destruct;
- (void)_unloadResources;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)minusPressed:(id)arg1;
- (void)plusPressed:(id)arg1;
- (void)touchEnded:(id)arg1;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)updateAppearance;

@end
