
@interface UITintColor : UIDynamicColor

- (struct CGColor { }*)CGColor;
- (bool)_isDeepColor;
- (bool)_isDynamicTintColor;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (double)alphaComponent;
- (id)colorSpaceName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isPatternColor;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
