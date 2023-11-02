
@interface SBPIPStashMaterialSettings : PTSettings {
    NSString * _chevronCompositingFilter;
    UIColor * _chevronTintColor;
    double  _darkTintAlpha;
    double  _lightTintAlpha;
}

@property (nonatomic, copy) NSString *chevronCompositingFilter;
@property (nonatomic, retain) UIColor *chevronTintColor;
@property (nonatomic) double darkTintAlpha;
@property (nonatomic, readonly) UIColor *darkTintColor;
@property (nonatomic) double lightTintAlpha;
@property (nonatomic, readonly) UIColor *lightTintColor;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)chevronCompositingFilter;
- (id)chevronTintColor;
- (double)darkTintAlpha;
- (id)darkTintColor;
- (double)lightTintAlpha;
- (id)lightTintColor;
- (void)setChevronCompositingFilter:(id)arg1;
- (void)setChevronTintColor:(id)arg1;
- (void)setDarkTintAlpha:(double)arg1;
- (void)setDefaultValues;
- (void)setLightTintAlpha:(double)arg1;

@end
