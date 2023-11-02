
@protocol PKPaletteColorPickerController <NSObject>

@required

- (<PKPaletteColorPicker> *)colorPicker;
- (<PKPaletteColorPickerControllerDelegate> *)delegate;
- (void)setDelegate:(id <PKPaletteColorPickerControllerDelegate>)arg1;
- (UIViewController *)viewController;

@end
