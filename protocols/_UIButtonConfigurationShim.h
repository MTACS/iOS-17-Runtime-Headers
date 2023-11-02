
@protocol _UIButtonConfigurationShim <NSObject, NSCopying, NSSecureCoding>

@required

- (UIButtonConfiguration *)_apiValue;
- (bool)_hasMultilineSubtitle;
- (bool)_hasMultilineTitle;
- (bool)_hasObscuringBackground;
- (bool)_hasOversizedSubtitle;
- (bool)_hasOversizedTitle;
- (bool)_hasSymbolImage;
- (bool)_isRoundButton;
- (UIColor *)_resolvedActivityIndicatorColor;
- (double)_resolvedActivityIndicatorSize;
- (UIImage *)_resolvedImage;
- (UIColor *)_resolvedImageColor;
- (double)_resolvedImageReservation;
- (UIImage *)_resolvedIndicator;
- (UIColor *)_resolvedIndicatorColor;
- (double)_resolvedIndicatorPadding;
- (UIImageSymbolConfiguration *)_resolvedIndicatorSymbolConfiguration;
- (long long)_resolvedMacIdiomStyle;
- (NSAttributedString *)_resolvedSubtitle;
- (UIImageSymbolConfiguration *)_resolvedSymbolConfiguration;
- (NSAttributedString *)_resolvedTitle;
- (long long)_resolvedTitleAlignment;
- (id)_spiValue;
- (<_UIButtonConfigurationShim> *)_updateFromButton:(UIButton *)arg1;
- (NSAttributedString *)attributedSubtitle;
- (NSAttributedString *)attributedTitle;
- (UIBackgroundConfiguration *)background;
- (long long)buttonSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copy;
- (long long)cornerStyle;
- (UIImage *)image;
- (double)imagePadding;
- (unsigned long long)imagePlacement;
- (long long)macIdiomStyle;
- (UIImageSymbolConfiguration *)preferredSymbolConfigurationForImage;
- (void)setAttributedTitle:(NSAttributedString *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setPreferredSymbolConfigurationForImage:(UIImageSymbolConfiguration *)arg1;
- (void)setTitle:(NSString *)arg1;
- (bool)showsActivityIndicator;
- (NSString *)subtitle;
- (long long)subtitleLineBreakMode;
- (NSString *)title;
- (long long)titleAlignment;
- (long long)titleLineBreakMode;
- (double)titlePadding;

@end
