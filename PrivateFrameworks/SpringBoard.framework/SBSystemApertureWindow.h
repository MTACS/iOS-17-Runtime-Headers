
@interface SBSystemApertureWindow : SBFSecureTouchPassThroughWindow

- (bool)_accessibilityInvertColorsIsDarkWindow;
- (bool)_allowsOcclusionDetectionOverride;
- (void)accessibilityApplyInvertFilter;
- (bool)accessibilityIgnoresInvertColors;
- (void)setAutorotates:(bool)arg1 forceUpdateInterfaceOrientation:(bool)arg2;

@end
