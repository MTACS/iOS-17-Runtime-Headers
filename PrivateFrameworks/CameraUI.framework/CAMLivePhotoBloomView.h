
@interface CAMLivePhotoBloomView : UIView {
    CALayer * __centerRing;
    UIImageView * __defaultImageView;
    CALayer * __innerRing;
    NSDictionary * __layersByRing;
    CAShapeLayer * __middleRing;
    CAShapeLayer * __outerRing;
    CALayer * __ringContainer;
    NSDictionary * __shapeLayersByRing;
    bool  _isOff;
}

@property (nonatomic, readonly) CALayer *_centerRing;
@property (nonatomic, readonly) UIImageView *_defaultImageView;
@property (nonatomic, readonly) CALayer *_innerRing;
@property (nonatomic, readonly) NSDictionary *_layersByRing;
@property (nonatomic, readonly) CAShapeLayer *_middleRing;
@property (nonatomic, readonly) CAShapeLayer *_outerRing;
@property (nonatomic, readonly) CALayer *_ringContainer;
@property (nonatomic, readonly) NSDictionary *_shapeLayersByRing;
@property (nonatomic) bool isOff;

- (void).cxx_destruct;
- (id)_centerRing;
- (id)_defaultImageView;
- (double)_diameterForRing:(long long)arg1;
- (id)_innerRing;
- (id)_layersByRing;
- (id)_middleRing;
- (id)_outerRing;
- (struct CGPath { }*)_pathForDiameter:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPath { }*)_pathForRing:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (id)_ringContainer;
- (id)_shapeLayersByRing;
- (double)_strokeWidthForRing:(long long)arg1;
- (void)_updateDefaultImage;
- (void)_updateRingColors;
- (void)animateBloom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOff;
- (void)layoutSubviews;
- (void)setIsOff:(bool)arg1;
- (void)stopAnimating;
- (void)tintColorDidChange;

@end
