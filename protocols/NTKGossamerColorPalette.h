
@protocol NTKGossamerColorPalette <NSObject>

@required

- (UIColor *)accentColor;
- (NSArray *)backgroundGradientColors;
- (UIColor *)backgroundOffGradientBottomColor;
- (UIColor *)backgroundOffGradientMidColor;
- (UIColor *)backgroundOffGradientTopColor;
- (UIColor *)bottomAccentColor;
- (UIColor *)bottomApproximateBackgroundColor;
- (UIColor *)centerAccentColor;
- (UIColor *)centerApproximateBackgroundColor;
- (UIColor *)dateLabelAccentColor;
- (UIColor *)dateLabelTextColor;
- (UIColor *)dialColor;
- (UIColor *)digitalTimeLabelColor;
- (NSNumber *)editingComplicationsFraction;
- (UIColor *)foregroundColor;
- (NSNumber *)foregroundGradientFraction;
- (UIColor *)gradientBottomColor;
- (UIColor *)gradientMidColor;
- (UIColor *)gradientTopColor;
- (UIColor *)hourMinuteHandFillColor;
- (UIColor *)hourMinuteHandStrokeColor;
- (UIColor *)hourTickColor;
- (NSNumber *)imageViewFraction;
- (UIColor *)inputColor;
- (UIColor *)largeTimeTritiumFillColor;
- (UIColor *)largeTimeTritiumOutlineColor;
- (UIColor *)minuteTickColor;
- (NSNumber *)monochromeFraction;
- (UIColor *)rangeDarkColor;
- (UIColor *)rangeLightColor;
- (NSNumber *)scaleFactor;
- (UIColor *)secondHandColor;
- (UIColor *)secondTickActiveColor;
- (UIColor *)secondTickInactiveColor;
- (UIColor *)smallTimeTritiumOutlineColor;
- (UIColor *)swatchComplicationPlaceholderColor;
- (UIColor *)timeLabelColor;
- (NSNumber *)tintedFraction;
- (UIColor *)topAccentColor;
- (UIColor *)topApproximateBackgroundColor;

@end
