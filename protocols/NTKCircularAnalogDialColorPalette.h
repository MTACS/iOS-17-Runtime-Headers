
@protocol NTKCircularAnalogDialColorPalette <NSObject>

@required

- (UIColor *)circularDialFillColor;
- (UIColor *)circularDialSubtickColor;
- (UIColor *)circularDialTickColor;
- (UIColor *)colorForCircularTicksForHour:(unsigned long long)arg1;
- (UIColor *)colorForCircularTicksForMinute:(unsigned long long)arg1;
- (bool)isMulticolorPalette;

@end
