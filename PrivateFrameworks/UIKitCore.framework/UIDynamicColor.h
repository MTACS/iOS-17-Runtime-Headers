
@interface UIDynamicColor : UIColor

- (struct CGColor { }*)CGColor;
- (id)_highContrastDynamicColor;
- (bool)_isDeepColor;
- (bool)_isDynamic;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)_resolvedMaterialWithTraitCollection:(id)arg1;
- (double)alphaComponent;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (bool)isPatternColor;
- (id)resolvedColorWithTraitCollection:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
