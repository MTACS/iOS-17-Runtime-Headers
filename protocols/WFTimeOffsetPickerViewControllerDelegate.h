
@protocol WFTimeOffsetPickerViewControllerDelegate <NSObject>

@required

- (void)timeOffsetPickerViewController:(WFTimeOffsetPickerViewController *)arg1 didSelectOffset:(unsigned long long)arg2;
- (void)timeOffsetPickerViewControllerDidCancel:(WFTimeOffsetPickerViewController *)arg1;

@end
