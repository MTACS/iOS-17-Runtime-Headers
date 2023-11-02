
@interface PRPosterLegibilitySettings : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    _UILegibilitySettings * _cachedLegibilitySettings;
    UIColor * _contentColor;
    double  _contrast;
    UIColor * _primaryColor;
    UIColor * _secondaryColor;
    double  _shadowAlphaOverride;
    UIColor * _shadowColor;
    double  _shadowRadiusMultiplier;
    long long  _source;
    _UILegibilitySettings * _specifiedLegibilitySettings;
    long long  _style;
}

@property (nonatomic, copy) UIColor *contentColor;
@property (nonatomic) double contrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

+ (id)legibilitySettingsForContentColor:(id)arg1 contrast:(double)arg2;
+ (id)legibilitySettingsForStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
+ (id)legibilitySettingsWithUILegibilitySettings:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentColor;
- (double)contrast;
- (id)convertToUILegibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLegibilitySettings:(id)arg1;
- (id)legibilitySettingsByApplyingShadowRadiusMultiplier:(double)arg1;
- (id)legibilitySettingsByOverridingShadowAlpha:(double)arg1;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setContentColor:(id)arg1;
- (void)setContrast:(double)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (long long)source;
- (long long)style;

@end
