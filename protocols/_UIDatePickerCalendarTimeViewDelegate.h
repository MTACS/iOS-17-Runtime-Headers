
@protocol _UIDatePickerCalendarTimeViewDelegate <NSObject>

@required

- (UIDatePicker *)createDatePickerForTimeView:(_UIDatePickerCalendarTimeView *)arg1;
- (void)timeView:(_UIDatePickerCalendarTimeView *)arg1 didSelectTime:(_UIDatePickerCalendarTime *)arg2;
- (void)timeViewDidBeginEditing:(_UIDatePickerCalendarTimeView *)arg1;
- (void)timeViewDidEndEditing:(_UIDatePickerCalendarTimeView *)arg1;
- (void)timeViewWillBecomeFirstResponder:(_UIDatePickerCalendarTimeView *)arg1;

@end
