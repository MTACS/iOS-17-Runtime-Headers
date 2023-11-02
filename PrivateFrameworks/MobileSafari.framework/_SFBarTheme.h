
@interface _SFBarTheme : NSObject {
    NSArray * _backdropAdjustmentEffects;
    UIBlurEffect * _backdropEffect;
    bool  _backdropIsDark;
    bool  _backdropIsTinted;
    UIColor * _controlsTintColor;
    long long  _overrideUserInterfaceStyle;
    UIColor * _platterProgressBarTintColor;
    UIColor * _preferredBarTintColor;
    UIColor * _preferredControlsTintColor;
    long long  _tintStyle;
}

@property (nonatomic, readonly) NSArray *backdropAdjustmentEffects;
@property (nonatomic, readonly) UIBlurEffect *backdropEffect;
@property (nonatomic, readonly) NSArray *backdropEffects;
@property (nonatomic, readonly) bool backdropIsDark;
@property (nonatomic, readonly) bool backdropIsTinted;
@property (nonatomic, readonly) UIColor *controlsTintColor;
@property (nonatomic, readonly) _SFBarTheme *fallbackTheme;
@property (nonatomic, readonly) long long overrideUserInterfaceStyle;
@property (nonatomic, readonly) UIColor *platterProgressBarTintColor;
@property (nonatomic, readonly) UIColor *preferredBarTintColor;
@property (nonatomic, readonly) long long tintStyle;

+ (id)backdropEffectForStyle:(long long)arg1;
+ (bool)backdropIsDarkForStyle:(long long)arg1;
+ (bool)canTintPrivateStyles;
+ (id)controlsTintColorForStyle:(long long)arg1;
+ (bool)prefersThemeColorEffect;
+ (id)themeWithBarTintStyle:(long long)arg1;
+ (id)themeWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;
+ (id)themeWithTheme:(id)arg1;

- (void).cxx_destruct;
- (void)applyBackdropEffectsToView:(id)arg1;
- (id)backdropAdjustmentEffects;
- (id)backdropEffect;
- (id)backdropEffects;
- (bool)backdropIsDark;
- (bool)backdropIsTinted;
- (id)controlsTintColor;
- (id)description;
- (id)fallbackTheme;
- (id)initWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)platterProgressBarTintColor;
- (id)preferredBarTintColor;
- (long long)tintStyle;

@end
