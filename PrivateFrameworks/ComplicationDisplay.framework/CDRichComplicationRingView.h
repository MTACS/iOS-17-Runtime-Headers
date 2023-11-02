
@interface CDRichComplicationRingView : CDRichComplicationShapeView <CLKMonochromeComplicationView> {
    bool  _clockwise;
    double  _curveWidth;
    UIView * _foregroundView;
    CAShapeLayer * _headLayer;
    double  _padding;
    CAShapeLayer * _tailLayer;
    CAShapeLayer * _tailStrokeLayer;
}

@property (nonatomic) bool clockwise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (id)_createHeadTailViewWithStartAngle:(double)arg1 endAngle:(double)arg2 clockwise:(bool)arg3 additionalWidth:(double)arg4;
- (struct CGPath { }*)_generatePath;
- (void)_layoutHeadTailView:(id)arg1 forProgress:(double)arg2;
- (id)_normalizeGradientLocations:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (double)_shapeLineWidth;
- (bool)_shouldReverseGradient;
- (void)_updateGradient;
- (bool)clockwise;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3 withFilterStyle:(long long)arg4;
- (void)layoutSubviews;
- (void)setClockwise:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
