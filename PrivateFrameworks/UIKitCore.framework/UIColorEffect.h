
@interface UIColorEffect : UIVisualEffect {
    NSDictionary * _configurationValues;
    bool  _disableInPlaceFiltering;
    NSString * _filterType;
    NSDictionary * _identityValues;
    NSDictionary * _requestedValues;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_colorEffectCAMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
+ (id)_colorEffectSourceOver:(struct { double x1; double x2; double x3; double x4; })arg1;
+ (id)colorEffectAdd:(id)arg1;
+ (id)colorEffectBrightness:(double)arg1;
+ (id)colorEffectColor:(id)arg1;
+ (id)colorEffectContrast:(double)arg1;
+ (id)colorEffectCurvesRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
+ (id)colorEffectInvert;
+ (id)colorEffectLuminanceCurveMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectMatrix:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg1;
+ (id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3;
+ (id)colorEffectMultiply:(id)arg1;
+ (id)colorEffectSaturate:(double)arg1;
+ (id)colorEffectSubtract:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_expectedUsage;
- (id)_filterEntry;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)sessionColorEffectDark;
+ (id)sessionColorEffectLight;

@end
