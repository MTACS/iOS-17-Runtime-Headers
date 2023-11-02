
@interface SBUISystemApertureSecureWindow : UIWindow

+ (bool)_isSecure;

- (bool)_accessibilityInvertColorsIsDarkWindow;
- (void)accessibilityApplyInvertFilter;
- (bool)accessibilityIgnoresInvertColors;

@end
