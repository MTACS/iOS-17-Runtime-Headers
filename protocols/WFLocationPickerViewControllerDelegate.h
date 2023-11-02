
@protocol WFLocationPickerViewControllerDelegate <NSObject>

@required

- (void)locationPicker:(WFLocationPickerViewController *)arg1 didFinishWithValue:(WFLocationValue *)arg2;
- (void)locationPickerDidCancel:(WFLocationPickerViewController *)arg1;

@end
