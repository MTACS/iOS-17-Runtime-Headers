
@interface BSUIVibrancyConfiguration : NSObject <NSCopying, NSSecureCoding> {
    BSUIVibrancyLUT * _alternativeVibrancyEffectLUT;
    long long  _backgroundType;
    double  _blendAmount;
    BSUIVibrancyConfiguration * _blendConfiguration;
    UIColor * _color;
    long long  _effectType;
    BSUIVibrancyEffectValues * _effectValues;
    NSString * _groupName;
    BSUIVibrancyShadowValues * _shadowValues;
}

@property (nonatomic, readonly, copy) BSUIVibrancyLUT *alternativeVibrancyEffectLUT;
@property (nonatomic, readonly) long long backgroundType;
@property (nonatomic, readonly) double blendAmount;
@property (nonatomic, readonly, copy) BSUIVibrancyConfiguration *blendConfiguration;
@property (nonatomic, readonly, copy) UIColor *color;
@property (nonatomic, readonly) long long effectType;
@property (readonly) BSUIVibrancyEffectValues *effectValues;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (readonly) BSUIVibrancyShadowValues *shadowValues;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternativeVibrancyEffectLUT;
- (void)appendDescriptionToFormatter:(id)arg1;
- (long long)backgroundType;
- (double)blendAmount;
- (id)blendConfiguration;
- (id)color;
- (id)copyWithAlternativeVibrancyEffectLUT:(id)arg1;
- (id)copyWithBlendAmount:(double)arg1 blendConfiguration:(id)arg2;
- (id)copyWithBlendAmount:(double)arg1 blendConfiguration:(id)arg2 alternativeVibrancyEffectLUT:(id)arg3;
- (id)copyWithEffectType:(long long)arg1 color:(id)arg2;
- (id)copyWithGroupName:(id)arg1;
- (id)copyWithWithBackgroundType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)effectType;
- (id)effectValues;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectType:(long long)arg1 backgroundType:(long long)arg2 color:(id)arg3;
- (id)initWithEffectType:(long long)arg1 backgroundType:(long long)arg2 color:(id)arg3 groupName:(id)arg4;
- (id)initWithEffectType:(long long)arg1 backgroundType:(long long)arg2 color:(id)arg3 groupName:(id)arg4 blendConfiguration:(id)arg5 blendAmount:(double)arg6 alternativeVibrancyEffectLUT:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)shadowValues;

// Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet

- (id)cs_adjustedForReducedBacklight;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (long long)vibrancyEffectTypeFromColor:(id)arg1;
+ (id)vibrancyLUTFromColor:(id)arg1 extensionBundleURL:(id)arg2;
+ (id)vibrancyLUTFromColor:(id)arg1 extensionBundleURL:(id)arg2 luminanceReduced:(bool)arg3;

@end
