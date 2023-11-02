
@interface AVTColorPreset : NSObject {
    long long  _category;
    NSDictionary * _derivedColors;
    AVTMaterial * _material;
    NSString * _name;
    AVTVaryingColor * _previewAccentColor;
    unsigned long long  _previewAccentType;
    AVTVaryingColor * _previewColor;
    NSDictionary * _propertyColors;
    float  _variation;
}

@property (readonly) long long category;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *name;
@property (readonly) UIImage *thumbnail;
@property (readonly) float variation;

+ (id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2;
+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2;
+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2 colorIndex:(unsigned long long)arg3 variation:(float)arg4;
+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3;
+ (id)colorPresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
+ (id)fallbackColorPresetForNilPresetAndCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
+ (id)secondaryColorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3;
+ (id)secondaryColorPresetsForCategory:(long long)arg1;

- (void).cxx_destruct;
- (id)baseColor;
- (long long)category;
- (id)colorPresetWithVariation:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedColorNameForPresetCategory:(long long)arg1;
- (id)description;
- (void)enumerateDerivedColorPresetsUsingBlock:(id /* block */)arg1;
- (id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2;
- (id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2 withSkinColor:(id)arg3;
- (id)initWithCategory:(long long)arg1 description:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLipsColor;
- (id)localizedName;
- (id)makeMaterial;
- (id)name;
- (id)previewAccentColor;
- (id)previewColor;
- (void)renderColorIntoCALayer:(id)arg1 withSkinColor:(id)arg2;
- (bool)shouldBlendWithSkinColor;
- (id)thumbnail;
- (float)variation;

@end
