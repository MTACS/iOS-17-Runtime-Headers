
@protocol PKPaletteToolPickerViewDataSource <NSObject>

@required

- (long long)numberOfToolsInToolPickerView:(PKPaletteToolPickerView *)arg1;
- (PKPaletteToolView *)toolPickerView:(PKPaletteToolPickerView *)arg1 viewForToolAtIndex:(long long)arg2;

@end
