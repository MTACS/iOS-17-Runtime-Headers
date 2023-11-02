
@protocol _UIDatePickerCalendarTimeLabelDelegate <NSObject>

@required

- (long long)keyboardTypeForTimeLabel:(_UIDatePickerCalendarTimeLabel *)arg1;
- (bool)timeLabel:(_UIDatePickerCalendarTimeLabel *)arg1 didReceiveText:(NSString *)arg2;
- (void)timeLabel:(_UIDatePickerCalendarTimeLabel *)arg1 didUpdateText:(NSString *)arg2;
- (bool)timeLabelCanBecomeFirstResponder:(_UIDatePickerCalendarTimeLabel *)arg1;
- (void)timeLabelDidBecomeFirstResponder:(_UIDatePickerCalendarTimeLabel *)arg1;
- (void)timeLabelDidBeginEditing:(_UIDatePickerCalendarTimeLabel *)arg1;
- (void)timeLabelDidEndEditing:(_UIDatePickerCalendarTimeLabel *)arg1;
- (void)timeLabelDidFailToBecomeFirstResponder:(_UIDatePickerCalendarTimeLabel *)arg1;
- (void)timeLabelDidResignFirstResponder:(_UIDatePickerCalendarTimeLabel *)arg1;
- (bool)timeLabelShouldSuppressSoftwareKeyboard:(_UIDatePickerCalendarTimeLabel *)arg1;
- (void)timeLabelWillBecomeFirstResponder:(_UIDatePickerCalendarTimeLabel *)arg1;

@end
