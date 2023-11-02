
@interface AEGradientShadowView : UIView {
    CAGradientLayer * _gradientLayer;
}

@property (nonatomic, retain) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_configureGradientLayer;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientLayer:(id)arg1;

@end
