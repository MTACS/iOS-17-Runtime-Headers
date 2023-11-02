
@protocol MFDatePickerViewControllerDelegate <NSObject>

@required

- (void)datePickerViewController:(MFDatePickerViewController *)arg1 didSelectDate:(NSDate *)arg2;

@optional

- (void)datePickerViewControllerDidDeleteDate:(MFDatePickerViewController *)arg1;

@end
