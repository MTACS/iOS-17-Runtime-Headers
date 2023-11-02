
@interface AVTCircularButton : UIButton {
    CAShapeLayer * _clippingLayer;
    UIColor * _dynamicBackgroundColor;
    bool  _isUsingDynamicBackground;
    UIImage * _symbolImage;
    UIColor * _symbolTintColor;
}

@property (nonatomic, retain) CAShapeLayer *clippingLayer;
@property (nonatomic, retain) UIColor *dynamicBackgroundColor;
@property (nonatomic) bool isUsingDynamicBackground;
@property (nonatomic, retain) UIImage *symbolImage;
@property (nonatomic, retain) UIColor *symbolTintColor;

- (void).cxx_destruct;
- (double)circleLayerAlpha;
- (id)clippingLayer;
- (id)dynamicBackgroundColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUsingDynamicBackground;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setClippingLayer:(id)arg1;
- (void)setDynamicBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsUsingDynamicBackground:(bool)arg1;
- (void)setSymbolImage:(id)arg1;
- (void)setSymbolImageWithName:(id)arg1;
- (void)setSymbolImageWithName:(id)arg1 configuration:(id)arg2;
- (void)setSymbolTintColor:(id)arg1;
- (void)setupView;
- (id)symbolImage;
- (id)symbolTintColor;
- (void)tintColorDidChange;
- (void)updateBackgroundColorIfNeeded;
- (void)updateDynamicBackgroundColor;

@end
