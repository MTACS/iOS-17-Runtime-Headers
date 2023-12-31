
@interface TSTTableStyle : TSSStyle

+ (void)initDefaultPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3;
+ (id)nonEmphasisTableProperties;
+ (void)p_populateParagraphStyle:(id)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)styleIDForPreset:(unsigned long long)arg1;

- (void)dealloc;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (SEL)mapThemePropertyMapSelector;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (id)strokeForStrokePreset:(unsigned long long)arg1;
- (void)validate;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;

@end
