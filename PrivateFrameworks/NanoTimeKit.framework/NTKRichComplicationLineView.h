
@interface NTKRichComplicationLineView : CDRichComplicationShapeView

- (struct CGPath { }*)_generatePath;
- (id)_normalizeGradientLocations:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (double)_shapeLineWidth;
- (bool)_shouldReverseGradient;

@end
