
@interface TSDShapeStyle : TSSStyle <TSDMixing>

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (void)initialize;
+ (id)p_magicMoveProperties;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (bool)wantsHighContrastBackgroundColor;

@end
