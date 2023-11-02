
@interface PRComplicationGalleryItemShadowView : UIView {
    CAShapeLayer * _maskLayer;
    CALayer * _shadowLayer;
}

@property (nonatomic, retain) CAShapeLayer *maskLayer;
@property (nonatomic, retain) CALayer *shadowLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void)setShadowLayer:(id)arg1;
- (id)shadowLayer;

@end
