
@protocol WFTimeRangePickerViewControllerDelegate <NSObject>

@required

- (void)timeRangePickerViewController:(WFTimeRangePickerViewController *)arg1 didPickStartTime:(NSDate *)arg2 endTime:(NSDate *)arg3;
- (void)timeRangePickerViewControllerDidCancel:(WFTimeRangePickerViewController *)arg1;

@end
