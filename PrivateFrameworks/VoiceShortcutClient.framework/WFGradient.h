
@interface WFGradient : NSObject <NSCopying, NSSecureCoding> {
    struct CGGradient { } * _CGGradient;
    WFColor * _accessibilityBaseColor;
    WFColor * _baseColor;
    long long  _blendMode;
    WFColor * _darkAccessibilityBaseColor;
    WFColor * _darkBaseColor;
    WFColor * _endColor;
    WFColor * _startColor;
}

@property (nonatomic, readonly) struct CGGradient { }*CGGradient;
@property (nonatomic, readonly) WFColor *accessibilityBaseColor;
@property (nonatomic, readonly) WFColor *baseColor;
@property (nonatomic, readonly) long long blendMode;
@property (nonatomic, readonly) WFColor *darkAccessibilityBaseColor;
@property (nonatomic, readonly) WFColor *darkBaseColor;
@property (nonatomic, readonly) WFColor *endColor;
@property (nonatomic, readonly) WFColor *startColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGGradient { }*)CGGradient;
- (id)accessibilityBaseColor;
- (id)baseColor;
- (id)baseColorForDarkMode:(bool)arg1 highContrast:(bool)arg2;
- (long long)blendMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkAccessibilityBaseColor;
- (id)darkBaseColor;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endColor;
- (id)initWithBaseColor:(id)arg1 darkBaseColor:(id)arg2 accessibilityBaseColor:(id)arg3 darkAccessibilityBaseColor:(id)arg4 startColor:(id)arg5 endColor:(id)arg6 blendMode:(long long)arg7;
- (id)initWithBaseColor:(id)arg1 startColor:(id)arg2 endColor:(id)arg3 blendMode:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (bool)isDark;
- (bool)isEqual:(id)arg1;
- (double)perceivedBrightness;
- (id)startColor;

@end
