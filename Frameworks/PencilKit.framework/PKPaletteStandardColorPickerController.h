
@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController {
    UIViewController * _colorPickerViewController;
}

@property (nonatomic, retain) UIViewController *colorPickerViewController;

- (void).cxx_destruct;
- (id)colorPickerViewController;
- (long long)colorUserInterfaceStyle;
- (id)init;
- (id)selectedColor;
- (void)setColorPickerViewController:(id)arg1;
- (bool)supportsAlpha;
- (id)viewController;

@end
