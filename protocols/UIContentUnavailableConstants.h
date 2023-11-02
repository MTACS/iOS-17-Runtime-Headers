
@protocol UIContentUnavailableConstants <NSObject>

@required

+ (id)sharedConstants;

- (UIButtonConfiguration *)defaultButtonConfigurationForTraitCollection:(UITraitCollection *)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })defaultDirectionalLayoutMarginsForTraitCollection:(UITraitCollection *)arg1;
- (double)defaultEmptyButtonToSecondaryButtonPaddingForTraitCollection:(UITraitCollection *)arg1;
- (UIImageSymbolConfiguration *)defaultEmptyImageSymbolConfigurationForTraitCollection:(UITraitCollection *)arg1;
- (UIColor *)defaultEmptyImageTintColor;
- (double)defaultEmptyImageToTextPaddingForTraitCollection:(UITraitCollection *)arg1;
- (UIFont *)defaultEmptySecondaryTextFontForTraitCollection:(UITraitCollection *)arg1;
- (UIColor *)defaultEmptyTextColorForTraitCollection:(UITraitCollection *)arg1;
- (UIFont *)defaultEmptyTextFontForTraitCollection:(UITraitCollection *)arg1;
- (double)defaultEmptyTextToButtonPaddingForTraitCollection:(UITraitCollection *)arg1;
- (double)defaultEmptyTextToSecondaryTextPaddingForTraitCollection:(UITraitCollection *)arg1;
- (UIImageSymbolConfiguration *)defaultLoadingImageSymbolConfigurationForTraitCollection:(UITraitCollection *)arg1;
- (UIColor *)defaultLoadingImageTintColor;
- (double)defaultLoadingImageToTextPaddingForTraitCollection:(UITraitCollection *)arg1;
- (UIColor *)defaultLoadingTextColor;
- (UIFont *)defaultLoadingTextFontForTraitCollection:(UITraitCollection *)arg1;
- (UIColor *)defaultSecondaryTextColor;
- (long long)defaultUserInterfaceRenderingMode;
- (bool)prefersSideBySideButtonAndSecondaryButton;

@end
