
@interface UIImageSymbolConfiguration : UIImageConfiguration {
    NSArray * _colors;
    struct { 
        unsigned int hasFixedPointSize : 1; 
        unsigned int usesHierarchicalColors : 1; 
        unsigned int prefersMulticolor : 1; 
        unsigned int specifiedPrefersMulticolor : 1; 
        unsigned int prefersMonochrome : 1; 
        unsigned int specifiedPrefersMonochrome : 1; 
    }  _configFlags;
    double  _customFontPointSizeMultiplier;
    NSDictionary * _namedColorStyles;
    double  _pointSize;
    long long  _scale;
    NSString * _textStyle;
    long long  _weight;
}

@property (nonatomic, readonly) NSArray *_colors;
@property (nonatomic, readonly) NSDictionary *_namedColorStyles;
@property (nonatomic, readonly) double customFontPointSizeMultiplier;
@property (nonatomic, readonly) double pointSizeForScalingWithTextStyle;
@property (nonatomic, readonly) long long scale;
@property (nonatomic, readonly, copy) NSString *textStyle;
@property (nonatomic, readonly) long long weight;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_configurationWithHierarchicalColors:(id)arg1;
+ (id)_configurationWithNamedColorStyles:(id)arg1;
+ (id)_defaultConfiguration;
+ (id)configurationPreferringMonochrome;
+ (id)configurationPreferringMulticolor;
+ (id)configurationWithFont:(id)arg1;
+ (id)configurationWithFont:(id)arg1 scale:(long long)arg2;
+ (id)configurationWithHierarchicalColor:(id)arg1;
+ (id)configurationWithPaletteColors:(id)arg1;
+ (id)configurationWithPointSize:(double)arg1;
+ (id)configurationWithPointSize:(double)arg1 weight:(long long)arg2;
+ (id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 scale:(long long)arg3;
+ (id)configurationWithScale:(long long)arg1;
+ (id)configurationWithTextStyle:(id)arg1;
+ (id)configurationWithTextStyle:(id)arg1 scale:(long long)arg2;
+ (id)configurationWithWeight:(long long)arg1;
+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;
+ (id)unspecifiedConfiguration;

- (void).cxx_destruct;
- (void)_applyConfigurationValuesTo:(id)arg1;
- (id)_colors;
- (id)_configurationByReplacingColors:(id)arg1;
- (void)_deriveGlyphSize:(long long*)arg1 weight:(long long*)arg2 pointSize:(double*)arg3;
- (bool)_hasColorConfigurationWithTintColor;
- (bool)_hasSpecifiedHierarchicalColors;
- (bool)_hasSpecifiedPaletteColors;
- (bool)_hasSpecifiedScale;
- (id)_hierarchicalColorForLayerLevel:(long long)arg1 effect:(id)arg2;
- (id)_initWithTraitCollection:(id)arg1 locale:(id)arg2;
- (bool)_isEquivalentToConfiguration:(id)arg1;
- (bool)_isUnspecified;
- (id)_namedColorStyles;
- (id)_paletteColorsWithEffect:(id)arg1;
- (bool)_prefersMonochrome;
- (bool)_prefersMulticolor;
- (id)_resolvedColorForNamedStyle:(id)arg1 effect:(id)arg2;
- (bool)_shouldApplyConfiguration:(id)arg1;
- (id)configurationWithoutPointSizeAndWeight;
- (id)configurationWithoutScale;
- (id)configurationWithoutTextStyle;
- (id)configurationWithoutWeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)customFontPointSizeMultiplier;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (double)pointSizeForScalingWithTextStyle;
- (long long)scale;
- (id)textStyle;
- (long long)weight;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_configurationWithPointSize:(double)arg1;
+ (id)_lp_configurationWithTextStyle:(id)arg1 weight:(long long)arg2 scale:(long long)arg3;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_configurationWithPointSize:(double)arg1 weight:(double)arg2;
+ (id)_mapkit_configurationWithPointSize:(double)arg1 weight:(double)arg2 scale:(long long)arg3;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (long long)_pk_defaultImageSymbolScale;
+ (id)pk_defaultImageSymbolConfiguration;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

+ (id)ams_imageSymbolConfigurationScaleWithDictionary:(id)arg1;
+ (id)ams_imageSymbolConfigurationStyleWithDictionary:(id)arg1;
+ (id)ams_imageSymbolConfigurationTextStyleWithDictionary:(id)arg1;
+ (id)ams_imageSymbolConfigurationWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (id)cuik_configurationWithFont:(id)arg1;
+ (id)cuik_configurationWithFont:(id)arg1 scale:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_medicationTrackingSymbolConfiguration;
+ (id)hk_prefersMultiColorConfiguration;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (bool)hu_hasTextStyle;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)_sf_staticConfigurationWithTextStyle:(id)arg1 scale:(long long)arg2;
+ (id)_sf_staticConfigurationWithTextStyle:(id)arg1 scale:(long long)arg2 compatibleWithTraitCollection:(id)arg3;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (id)sbui_systemApertureControlConfiguration;
+ (id)sbui_systemApertureDefaultConfiguration;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)hierarchicalTpConfigurationWithStaticTextStyle:(id)arg1 scale:(long long)arg2 color:(id)arg3;
+ (id)paletteTpConfigurationWithStaticTextStyle:(id)arg1 scale:(long long)arg2 colors:(id)arg3;
+ (id)tpConfigurationWithStaticTextStyle:(id)arg1 scale:(long long)arg2;
+ (id)tpConfigurationWithStaticTextStyle:(id)arg1 scale:(long long)arg2 symbolWeight:(long long)arg3;

@end
