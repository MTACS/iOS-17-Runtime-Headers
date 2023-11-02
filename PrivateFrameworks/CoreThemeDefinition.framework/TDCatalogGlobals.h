
@interface TDCatalogGlobals : NSManagedObject {
    bool  _allowsCustomTintColors;
    bool  _allowsSystemTintColors;
    bool  _allowsVibrancy;
    unsigned long long  _defaultBlendMode;
    bool  _supportsBrightnessAdjustments;
    bool  _supportsMultipleAppearancesForEffects;
    bool  _supportsWhitePointAdjustments;
}

@property (nonatomic) bool allowsCustomTintColors;
@property (nonatomic) bool allowsSystemTintColors;
@property (nonatomic) bool allowsVibrancy;
@property (nonatomic) unsigned long long defaultBlendMode;
@property (nonatomic) bool supportsBrightnessAdjustments;
@property (nonatomic) bool supportsMultipleAppearancesForEffects;
@property (nonatomic) bool supportsWhitePointAdjustments;

- (bool)allowsCustomTintColors;
- (bool)allowsSystemTintColors;
- (bool)allowsVibrancy;
- (unsigned long long)defaultBlendMode;
- (id)dictionaryForArchiving;
- (void)setAllowsCustomTintColors:(bool)arg1;
- (void)setAllowsSystemTintColors:(bool)arg1;
- (void)setAllowsVibrancy:(bool)arg1;
- (void)setDefaultBlendMode:(unsigned long long)arg1;
- (void)setSupportsBrightnessAdjustments:(bool)arg1;
- (void)setSupportsMultipleAppearancesForEffects:(bool)arg1;
- (void)setSupportsWhitePointAdjustments:(bool)arg1;
- (bool)supportsBrightnessAdjustments;
- (bool)supportsMultipleAppearancesForEffects;
- (bool)supportsWhitePointAdjustments;

@end
