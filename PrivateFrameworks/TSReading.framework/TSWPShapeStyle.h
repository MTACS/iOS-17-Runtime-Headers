
@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>

@property (nonatomic, readonly) NSString *presetKind;

+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)layoutProperties;
+ (id)presetStyleDescriptor;
+ (id)properties;
+ (id)propertiesAllowingNSNull;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)defaultParagraphStyle;
- (SEL)mapThemePropertyMapSelector;
- (id)presetKind;
- (void)setDefaultParagraphStyle:(id)arg1;

@end
