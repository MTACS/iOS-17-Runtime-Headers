
@interface SFThemeColorBarTheme : _SFBarTheme {
    bool  _appliesDarkeningOverlay;
    NSString * _backdropGroupName;
    UIBlurEffect * _overrideBackdropEffect;
    UIColor * _overrideTintColor;
    UIColor * _themeColor;
    UITraitCollection * _traitCollection;
    long long  _userInterfaceStyle;
}

@property (nonatomic) bool appliesDarkeningOverlay;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, retain) UIBlurEffect *overrideBackdropEffect;
@property (nonatomic, readonly) UIColor *overrideTintColor;
@property (nonatomic, readonly) UIColor *themeColor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long userInterfaceStyle;

+ (bool)canTintPrivateStyles;
+ (bool)prefersThemeColorEffect;

- (void).cxx_destruct;
- (bool)appliesDarkeningOverlay;
- (void)applyBackdropEffectsToView:(id)arg1;
- (id)backdropEffect;
- (id)backdropEffects;
- (id)backdropGroupName;
- (id)initWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)overrideBackdropEffect;
- (id)overrideTintColor;
- (void)setAppliesDarkeningOverlay:(bool)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setOverrideBackdropEffect:(id)arg1;
- (id)themeColor;
- (id)traitCollection;
- (long long)userInterfaceStyle;

@end
