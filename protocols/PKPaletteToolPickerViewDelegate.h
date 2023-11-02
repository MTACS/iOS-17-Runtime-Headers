
@protocol PKPaletteToolPickerViewDelegate <NSObject, PKPalettePopoverPresenting>

@required

- (void)toolPicker:(PKPaletteToolPickerView *)arg1 didSelectTool:(PKPaletteToolView *)arg2 atIndex:(unsigned long long)arg3;
- (void)toolPickerDidToggleRulerTool:(PKPaletteToolPickerView *)arg1;
- (double)toolPickerView:(PKPaletteToolPickerView *)arg1 widthForToolAtIndex:(long long)arg2 isCompactSize:(bool)arg3;
- (void)toolPickerViewDidChangeTraitCollectionSizeClass:(PKPaletteToolPickerView *)arg1;

@end
