
@protocol UIColorPickerViewControllerDelegate <NSObject>

@optional

- (void)colorPickerViewController:(UIColorPickerViewController *)arg1 didSelectColor:(UIColor *)arg2 continuously:(bool)arg3;
- (void)colorPickerViewControllerDidFinish:(UIColorPickerViewController *)arg1;
- (void)colorPickerViewControllerDidSelectColor:(UIColorPickerViewController *)arg1;

@end
