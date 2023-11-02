
@interface PLPhotoEffect : NSObject {
    NSString * _CIFilterName;
    NSString * _displayName;
    NSString * _filterIdentifier;
    bool  _isLegacy;
    bool  _isPortrait;
    long long  _lightingVersion;
    NSString * _relatedVersionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *CIFilterName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *filterIdentifier;
@property (nonatomic, readonly) bool isLegacy;
@property (nonatomic, readonly) bool isPortrait;
@property (nonatomic, readonly) long long latestVersion;
@property (nonatomic, readonly) long long lightingVersion;
@property (nonatomic, readonly, copy) NSString *relatedVersionIdentifier;

+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (unsigned long long)_indexOfEffectWithIdentifier:(id)arg1;
+ (id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2;
+ (id)_lightingEffectWithIdentifier:(id)arg1 relatedVersionIdentifier:(id)arg2 CIFilterName:(id)arg3 lightingVersion:(long long)arg4;
+ (id)allEffects;
+ (id)allSupportedEffects;
+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (id)equivalentEffectForIdentifier:(id)arg1 version:(long long)arg2;
+ (bool)isEffectNoneForIdentifier:(id)arg1;
+ (bool)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
+ (id)standardSupportedEffects;

- (void).cxx_destruct;
- (id)CIFilterName;
- (id)description;
- (id)displayName;
- (id)filterIdentifier;
- (bool)isLegacy;
- (bool)isPortrait;
- (long long)latestVersion;
- (long long)lightingVersion;
- (id)newEffectFilter;
- (id)relatedVersionIdentifier;

@end
