
@interface SBUILegibilitySettings : NSObject <SBUILegibilitySettings> {
    _UILegibilitySettings * _cachedLegacyLegibiltiySettings;
    unsigned long long  _computedHash;
    double  _minFillHeight;
    UIColor * _primaryColor;
    UIColor * _secondaryColor;
    UIColor * _shadowColor;
    struct { 
        double shadowRadius; 
        double shadowAlpha; 
        double imageOutset; 
        long long compositingFilter; 
    }  _shadowSettings;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double imageOutset;
@property (nonatomic, readonly) double minFillHeight;
@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *secondaryColor;
@property (nonatomic, readonly) UIColor *shadowColor;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; long long x4; } shadowSettings;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

+ (id)sharedInstanceForStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UILegibilitySettings;
- (void)_configureForStyle:(long long)arg1 contentColor:(id)arg2;
- (id)compositingFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)imageOutset;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentColor:(id)arg1;
- (id)initWithContentColor:(id)arg1 contrast:(double)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 contentColor:(id)arg2;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4 shadowSettings:(struct { double x1; double x2; double x3; long long x4; })arg5;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4 shadowSettings:(struct { double x1; double x2; double x3; long long x4; })arg5 minFillHeight:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLegibilitySettings:(id)arg1;
- (double)minFillHeight;
- (id)primaryColor;
- (id)secondaryColor;
- (double)shadowAlpha;
- (id)shadowColor;
- (double)shadowRadius;
- (struct { double x1; double x2; double x3; long long x4; })shadowSettings;
- (long long)style;

@end
