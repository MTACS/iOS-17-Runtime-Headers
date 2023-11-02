
@interface PCNativeColor : NSObject <NSSecureCoding> {
    NSArray * _darkModeColors;
    long long  _gradientOrientation;
    NSArray * _lightModeColors;
}

@property (nonatomic, retain) NSArray *darkModeColors;
@property (nonatomic) long long gradientOrientation;
@property (nonatomic, retain) NSArray *lightModeColors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)darkModeColors;
- (void)encodeWithCoder:(id)arg1;
- (long long)gradientOrientation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lightModeColors;
- (void)setDarkModeColors:(id)arg1;
- (void)setGradientOrientation:(long long)arg1;
- (void)setLightModeColors:(id)arg1;

@end
