
@interface PRPosterColor : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    UIColor * _color;
    PRPosterColorValues * _colorValues;
    NSString * _identifier;
    NSString * _localizedName;
    unsigned long long  _preferredStyle;
    bool  _suggested;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) PRPosterColorValues *colorValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PRPosterColorValues *hsbValues;
@property (readonly) PRPosterColorHSLValues *hslValues;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) unsigned long long preferredStyle;
@property (getter=isSuggested, nonatomic) bool suggested;
@property (readonly) Class superclass;
@property (getter=isVibrantMaterialColor, nonatomic, readonly) bool vibrantMaterialColor;
@property (getter=isVibrantMonochromeColor, nonatomic, readonly) bool vibrantMonochromeColor;

+ (id)identifierForColorWithValues:(id)arg1 style:(unsigned long long)arg2;
+ (id)styleStringForStyle:(unsigned long long)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)vibrantMaterialColor;
+ (id)vibrantMonochromeColor;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)color;
- (id)colorValues;
- (id)colors;
- (id)contentStyle;
- (id)copyAsSuggestedColor;
- (id)copyWithAlpha:(double)arg1;
- (id)copyWithLuminance:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)hsbValues;
- (id)hslValues;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithColor:(id)arg1 preferredStyle:(unsigned long long)arg2;
- (id)initWithColor:(id)arg1 preferredStyle:(unsigned long long)arg2 localizedName:(id)arg3;
- (id)initWithColor:(id)arg1 preferredStyle:(unsigned long long)arg2 localizedName:(id)arg3 suggested:(bool)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 luminance:(double)arg3 alpha:(double)arg4 preferredStyle:(unsigned long long)arg5 localizedName:(id)arg6 suggested:(bool)arg7;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 luminance:(double)arg3 alpha:(double)arg4 preferredStyle:(unsigned long long)arg5 suggested:(bool)arg6;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 colorValues:(id)arg3 preferredStyle:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 colorValues:(id)arg3 preferredStyle:(unsigned long long)arg4 localizedName:(id)arg5;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 colorValues:(id)arg3 preferredStyle:(unsigned long long)arg4 localizedName:(id)arg5 suggested:(bool)arg6;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 preferredStyle:(unsigned long long)arg3;
- (id)initWithLUTIdentifier:(id)arg1;
- (id)initWithPosterColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToColor:(id)arg1;
- (bool)isLUTBackedColor;
- (bool)isSuggested;
- (bool)isVibrantMaterialColor;
- (bool)isVibrantMonochromeColor;
- (id)localizedName;
- (id)lutIdentifier;
- (unsigned long long)preferredStyle;
- (bool)requiresVibrancyEffectView;
- (void)setSuggested:(bool)arg1;
- (unsigned long long)type;
- (id)vibrancyConfiguration;

@end
