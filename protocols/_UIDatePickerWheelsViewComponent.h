
@protocol _UIDatePickerWheelsViewComponent <_UIDatePickerViewComponent>

@required

- (bool)_allowsZeroCountDownDuration;
- (bool)_allowsZeroTimeInterval;
- (UIColor *)_highlightColor;
- (bool)_isTimeIntervalMode;
- (UIColor *)_magnifierLineColor;
- (void)_setAllowsZeroCountDownDuration:(bool)arg1;
- (void)_setAllowsZeroTimeInterval:(bool)arg1;
- (void)_setHidesLabels:(bool)arg1;
- (void)_setHighlightColor:(UIColor *)arg1;
- (void)_setMagnifierLineColor:(UIColor *)arg1;
- (void)_setTextColor:(UIColor *)arg1;
- (void)_setTextShadowColor:(UIColor *)arg1;
- (UIColor *)_textColor;
- (UIColor *)_textShadowColor;
- (void)_updateDateOrTime;
- (void)setHighlightsToday:(bool)arg1;

@end
