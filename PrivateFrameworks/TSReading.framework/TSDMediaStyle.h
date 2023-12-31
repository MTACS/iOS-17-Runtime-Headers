
@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>

@property (nonatomic, readonly) NSString *presetKind;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)imageStylePresetStyleDescriptor;
+ (void)initialize;
+ (id)movieStylePresetStyleDescriptor;
+ (id)p_magicMoveProperties;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (SEL)mapThemePropertyMapSelector;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)presetKind;

@end
