
@protocol MFComposeColorPickerControllerDelegate <NSObject>

@required

- (void)colorPicker:(MFComposeColorPickerController *)arg1 didChangeSelectedColor:(UIColor *)arg2;
- (void)colorPickerDidCancel:(MFComposeColorPickerController *)arg1;

@end
