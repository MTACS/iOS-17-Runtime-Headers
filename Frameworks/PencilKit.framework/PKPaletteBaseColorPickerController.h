
@interface PKPaletteBaseColorPickerController : NSObject <PKPaletteColorPicker, PKPaletteColorPickerController> {
    <PKPaletteColorPicker> * _colorPicker;
    long long  _colorUserInterfaceStyle;
    <PKPaletteColorPickerControllerDelegate> * _delegate;
    UIColor * _selectedColor;
    bool  _supportsAlpha;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) <PKPaletteColorPicker> *colorPicker;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaletteColorPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *selectedColor;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAlpha;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)colorPicker;
- (long long)colorUserInterfaceStyle;
- (id)delegate;
- (id)selectedColor;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColorForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSupportsAlpha:(bool)arg1;
- (bool)supportsAlpha;
- (id)viewController;

@end
