
@protocol NTKVictoryAnalogBackgroundColorPalette <NSObject>

@required

- (UIColor *)analogDotColor;
- (UIColor *)backgroundColor;
- (NSNumber *)dotMarkerAlpha;
- (UIColor *)dotMarkerColorAtIndex:(NSNumber *)arg1;
- (bool)isMulticolor;
- (UIColor *)logo;
- (UIColor *)numberColorAtIndex:(NSNumber *)arg1;
- (UIColor *)numbersColor;

@end
