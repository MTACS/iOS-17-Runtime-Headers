
@interface UIVibrancyEffect : UIVisualEffect {
    _UIVibrancyEffectImpl * _impl;
}

@property (getter=_vibrancyStyle, nonatomic, readonly) long long _vibrancyStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_darkVibrantEffectWithLightenColor:(id)arg1 dodgeColor:(id)arg2 compositingColor:(id)arg3;
+ (id)_effectForBlurEffect:(id)arg1 vibrancyStyle:(long long)arg2;
+ (id)_effectWithStyle:(long long)arg1 ignoreSimpleVibrancy:(bool)arg2;
+ (id)_lightVibrantEffectWithDarkenColor:(id)arg1 burnColor:(id)arg2 compositingColor:(id)arg3;
+ (id)_vibrancyEntryWithType:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 inputReversed:(bool)arg4;
+ (id)_vibrantEffectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3;
+ (id)_vibrantEffectWithCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1 alpha:(double)arg2;
+ (id)_vibrantEffectWithLightCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1 darkCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg2 alpha:(double)arg3;
+ (id)_vibrantShadowEffect;
+ (id)darkVibrantEffectWithDodgeColor:(id)arg1 lightenColor:(id)arg2 compositingColor:(id)arg3;
+ (id)effectForBlurEffect:(id)arg1;
+ (id)effectForBlurEffect:(id)arg1 style:(long long)arg2;
+ (id)lightVibrantEffectWithBurnColor:(id)arg1 darkenColor:(id)arg2 compositingColor:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)vibrantChromeShadowEffect;
+ (id)vibrantEffectWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;
+ (id)vibrantHeavyShadowEffect;
+ (id)vibrantMediumShadowEffect;

- (void).cxx_destruct;
- (long long)_blurStyle;
- (id)_effectReplacingTintColor:(id)arg1;
- (long long)_expectedUsage;
- (id)_initWithImplementation:(id)arg1;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)_reduceTransparencyEffectConfig;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (long long)_vibrancyStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectConfig;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectConfigForReducedTransperancy:(bool)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter

+ (id)_widgetEffectForPrivateVibrancyStyle:(long long)arg1;
+ (id)notificationCenterVibrancyEffect;
+ (id)widgetEffectForVibrancyStyle:(long long)arg1;
+ (id)widgetPrimaryHighlightVibrancyEffect;
+ (id)widgetPrimaryVibrancyEffect;
+ (id)widgetQuaternaryVibrancyEffect;
+ (id)widgetSecondaryHighlightVibrancyEffect;
+ (id)widgetSecondaryVibrancyEffect;
+ (id)widgetTertiaryVibrancyEffect;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)controlCenterKeyLineOnDarkVibrancyEffect;
+ (id)controlCenterKeyLineOnLightVibrancyEffect;
+ (id)controlCenterPrimaryVibrancyEffect;
+ (id)controlCenterScrollViewDarkeningVibrancyEffect;
+ (id)controlCenterSecondaryVibrancyEffect;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)_sf_effectWithStyle:(long long)arg1 forBarTintStyle:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_platterVibrancyEffect;
+ (id)siriui_userUtteranceEditModeVibrancyEffect;

@end
