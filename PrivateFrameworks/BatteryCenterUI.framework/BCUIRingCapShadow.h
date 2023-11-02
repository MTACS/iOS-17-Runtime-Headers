
@interface BCUIRingCapShadow : UIView {
    double  _arcFraction;
    double  _lineWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _ringBounds;
    UIImageView * _shadowCapImageView;
}

@property (nonatomic) double arcFraction;
@property (nonatomic, readonly) double lineWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } ringBounds;

+ (id)_ringCapShadowImageWithRingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2 scale:(double)arg3;
+ (id)ringCapShadowForRingWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;

- (void).cxx_destruct;
- (id)_initWithRingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shadowCapFrame;
- (double)arcFraction;
- (void)layoutSubviews;
- (double)lineWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ringBounds;
- (void)setArcFraction:(double)arg1;

@end
