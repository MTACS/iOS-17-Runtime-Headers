
@protocol PKPaletteColorPickerViewDelegate <NSObject>

@required

- (void)colorPickerDidChangeSelectedColor:(PKPaletteColorPickerView *)arg1 isFromExtendedColorPicker:(bool)arg2;

@optional

- (bool)colorPickerShouldDisplayColorSelection:(PKPaletteColorPickerView *)arg1;

@end
