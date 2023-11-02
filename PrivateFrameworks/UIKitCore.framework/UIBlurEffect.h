
@interface UIBlurEffect : UIVisualEffect {
    _UIBlurEffectImpl * _impl;
}

@property (nonatomic, readonly) bool _canProvideCoreMaterialVibrancyEffect;
@property (nonatomic, readonly) bool _canProvideVibrancyEffect;
@property (nonatomic, readonly) bool _invertAutomaticStyle;
@property (nonatomic, readonly) long long _style;
@property (nonatomic, readonly) UIColor *_tintColor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_effectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3;
+ (id)_effectWithBlurRadius:(double)arg1 scale:(double)arg2;
+ (id)_effectWithInfiniteRadius;
+ (id)_effectWithInfiniteRadiusScale:(double)arg1;
+ (id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(bool)arg2;
+ (id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(bool)arg3;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)_effectWithVariableBlurRadius:(double)arg1 imageMask:(id)arg2 scale:(double)arg3;
+ (id)effectWithBlurRadius:(double)arg1;
+ (id)effectWithStyle:(long long)arg1;
+ (id)effectWithVariableBlurRadius:(double)arg1 imageMask:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canProvideCoreMaterialVibrancyEffect;
- (bool)_canProvideVibrancyEffect;
- (long long)_expectedUsage;
- (id)_initWithImplementation:(id)arg1;
- (bool)_invertAutomaticStyle;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (long long)_style;
- (id)_tintColor;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_defaultPopoverBackgroundEffect;
+ (id)_sf_defaultStartPageBackgroundEffect;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)smu_effectWithBlurRadius:(double)arg1;

@end
