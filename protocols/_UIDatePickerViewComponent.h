
@protocol _UIDatePickerViewComponent

@required

- (void)_setEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })appliedInsetsToEdgeOfContent;
- (_UIDatePickerDataModel *)data;
- (UIDatePicker *)datePicker;
- (long long)datePickerStyle;
- (struct CGSize { double x1; double x2; })defaultSize;
- (void)didChangeCalendar;
- (void)didChangeDateFrom:(NSDate *)arg1 animated:(bool)arg2;
- (void)didChangeLocale;
- (void)didChangeMaximumDate;
- (void)didChangeMinimumDate;
- (void)didChangeMinuteInterval;
- (void)didChangeMode;
- (void)didChangeRoundsToMinuteInterval;
- (void)didChangeTimeZone;
- (void)didChangeToday;
- (void)didReset;
- (void)displaySelectedDateAnimated:(bool)arg1;
- (bool)hasDefaultSize;
- (void)setData:(_UIDatePickerDataModel *)arg1;
- (void)setDatePicker:(UIDatePicker *)arg1;

@optional

- (void)_workaround66574039_datePickerDidUpdateLayoutMargins;
- (double)contentWidth;
- (void)didChangeCustomFontDesign;
- (UIResponder *)primaryFirstResponder;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;
- (bool)usesAutoLayout;

@end
