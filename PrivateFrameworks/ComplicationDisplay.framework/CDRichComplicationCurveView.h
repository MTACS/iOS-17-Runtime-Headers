
@interface CDRichComplicationCurveView : CDRichComplicationShapeView {
    double  _beginAngle;
    bool  _clockwise;
    double  _curveWidth;
    double  _drawingBeginAngle;
    double  _drawingEndAngle;
    double  _endAngle;
    double  _padding;
}

@property (nonatomic) double beginAngle;
@property (nonatomic) bool clockwise;
@property (nonatomic) double endAngle;

- (double)_angleAtProgress:(float)arg1;
- (struct CGPoint { double x1; double x2; })_centerPoint;
- (struct CGPath { }*)_generatePath;
- (id)_normalizeGradientLocations:(id)arg1;
- (double)_outerRadius;
- (struct CGPoint { double x1; double x2; })_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (double)_shapeLineWidth;
- (bool)_shouldReverseGradient;
- (double)_totalDrawableAngle;
- (void)_updatePath;
- (double)beginAngle;
- (bool)clockwise;
- (double)endAngle;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 withFilterStyle:(long long)arg6;
- (void)layoutSubviews;
- (void)setBeginAngle:(double)arg1;
- (void)setClockwise:(bool)arg1;
- (void)setEndAngle:(double)arg1;

@end
