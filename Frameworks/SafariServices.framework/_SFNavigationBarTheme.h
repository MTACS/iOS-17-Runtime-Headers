
@interface _SFNavigationBarTheme : _SFBarTheme {
    UIColor * _annotationTextColor;
    bool  _backdropIsExtreme;
    bool  _backdropIsGreen;
    bool  _backdropIsRed;
    UIColor * _platterAnnotationTextColor;
    bool  _platterBackdropIsDark;
    long long  _platterKeyboardOverrideAppearance;
    long long  _platterOverrideUserInterfaceStyle;
    UIColor * _platterPlaceholderTextColor;
    UIColor * _platterSecureTextColor;
    UIColor * _platterSelectionColor;
    UIColor * _platterTextColor;
    long long  _platterTextFieldOverrideUserInterfaceStyle;
    UIColor * _platterWarningTextColor;
    UIColor * _progressBarTintColor;
    UIColor * _secureTextColor;
    UIColor * _textColor;
    UIColor * _warningTextColor;
}

@property (nonatomic, readonly) UIColor *annotationTextColor;
@property (nonatomic, readonly) bool backdropIsExtreme;
@property (nonatomic, readonly) bool backdropIsGreen;
@property (nonatomic, readonly) bool backdropIsRed;
@property (nonatomic, readonly) UIColor *platterAnnotationTextColor;
@property (nonatomic, readonly) bool platterBackdropIsDark;
@property (nonatomic, readonly) long long platterKeyboardOverrideAppearance;
@property (nonatomic, readonly) long long platterOverrideUserInterfaceStyle;
@property (nonatomic, readonly) UIColor *platterPlaceholderTextColor;
@property (nonatomic, readonly) UIColor *platterSecureTextColor;
@property (nonatomic, readonly) UIColor *platterSelectionColor;
@property (nonatomic, readonly) UIColor *platterTextColor;
@property (nonatomic, readonly) long long platterTextFieldOverrideUserInterfaceStyle;
@property (nonatomic, readonly) UIColor *platterWarningTextColor;
@property (nonatomic, readonly) UIColor *progressBarTintColor;
@property (nonatomic, readonly) UIColor *secureTextColor;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *warningTextColor;

- (void).cxx_destruct;
- (id)URLAccessoryButtonTintColorForInputMode:(unsigned long long)arg1;
- (id)_colorForPlatterTextColor:(id)arg1 regularColor:(id)arg2 withPlatterAlpha:(double)arg3;
- (id)annotationTextColor;
- (id)annotationTextColorForPlatterAlpha:(double)arg1;
- (bool)backdropIsExtreme;
- (bool)backdropIsGreen;
- (bool)backdropIsRed;
- (id)initWithBarTintStyle:(long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;
- (id)platterAnnotationTextColor;
- (bool)platterBackdropIsDark;
- (long long)platterKeyboardOverrideAppearance;
- (long long)platterOverrideUserInterfaceStyle;
- (id)platterPlaceholderTextColor;
- (id)platterSecureTextColor;
- (id)platterSecureTextColorForPlatterAlpha:(double)arg1;
- (id)platterSelectionColor;
- (id)platterTextColor;
- (id)platterTextColorForPlatterAlpha:(double)arg1;
- (long long)platterTextFieldOverrideUserInterfaceStyle;
- (id)platterWarningTextColor;
- (id)platterWarningTextColorForPlatterAlpha:(double)arg1;
- (id)progressBarTintColor;
- (id)secureTextColor;
- (id)textColor;
- (id)warningTextColor;

@end
