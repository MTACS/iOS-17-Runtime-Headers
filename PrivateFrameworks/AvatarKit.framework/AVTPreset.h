
@interface AVTPreset : NSObject {
    NSDictionary * _assetSpecificImageVariantDependencies;
    NSDictionary * _assetSpecificMaterialVariantDependencies;
    NSDictionary * _assetSpecificMorphVariantDependencies;
    NSArray * _assets;
    float  _bodyPoseVariantIntensity;
    long long  _category;
    NSArray * _dependencies;
    unsigned long long  _editableColorCount;
    NSString * _identifier;
    NSString * _imageVariant;
    NSString * _materialVariant;
    bool  _mirrored;
    NSString * _morphVariant;
    float  _morphVariantIntensity;
    NSDictionary * _presetSpecificPresetDependencies;
    NSDictionary * _specializationSettings;
    NSDictionary * _tags;
    float  _textureAssetPresence;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *displayableName;
@property (nonatomic, readonly) unsigned long long editableColorCount;
@property (nonatomic, readonly) bool hasComponent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedPairedName;
@property (readonly) NSDictionary *specializationSettings;
@property (nonatomic, readonly) NSDictionary *tags;

+ (id)availablePresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
+ (unsigned long long)editableColorCountForCategory:(long long)arg1;
+ (id)presetWithCategory:(long long)arg1 identifier:(id)arg2;
+ (id)secondaryColorPresetsForCategory:(long long)arg1;

- (void).cxx_destruct;
- (void)applyPresetByChangingComponentsOfMemoji:(id)arg1 animated:(bool)arg2;
- (id)assets;
- (id)cache;
- (long long)category;
- (id)description;
- (id)displayableName;
- (unsigned long long)editableColorCount;
- (void)enumerateAssetSpecificVariantDependenciesOfKind:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumeratePresetDependencies:(id /* block */)arg1;
- (void)enumeratePresetSpecificPresetDependencies:(id /* block */)arg1;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumerateVisibilityDependencies:(id /* block */)arg1;
- (bool)hasComponent;
- (id)identifier;
- (id)localizedName;
- (id)localizedPairedName;
- (void)rebuildSpecializationSettings;
- (id)specializationSettings;
- (id)tags;

@end
