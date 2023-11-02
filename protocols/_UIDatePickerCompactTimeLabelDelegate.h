
@protocol _UIDatePickerCompactTimeLabelDelegate <NSObject>

@required

- (void)compactTimeLabel:(_UIDatePickerCompactTimeLabel *)arg1 didSelectTime:(_UIDatePickerCalendarTime *)arg2;
- (bool)compactTimeLabel:(_UIDatePickerCompactTimeLabel *)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)compactTimeLabelDidBeginEditing:(_UIDatePickerCompactTimeLabel *)arg1;
- (void)compactTimeLabelDidEndEditing:(_UIDatePickerCompactTimeLabel *)arg1;
- (void)compactTimeLabelWillBecomeFirstResponder:(_UIDatePickerCompactTimeLabel *)arg1;
- (UIDatePicker *)createDatePickerForCompactTimeLabel:(_UIDatePickerCompactTimeLabel *)arg1;

@end
