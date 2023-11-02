
@interface PRXScrollShadowView : UIView {
    unsigned long long  _edge;
    CAGradientLayer * _maskLayer;
}

@property (nonatomic) unsigned long long edge;
@property (nonatomic, readonly) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (unsigned long long)edge;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEdge:(unsigned long long)arg1;

@end
