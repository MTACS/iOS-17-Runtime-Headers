
@protocol PREditingFontPickerComponentViewControllerDelegate <NSObject>

@required

- (void)fontPickerComponentViewController:(PREditingFontPickerComponentViewController *)arg1 didChangeFontWeight:(double)arg2;
- (void)fontPickerComponentViewController:(PREditingFontPickerComponentViewController *)arg1 didSelectItem:(PREditingFontPickerItem *)arg2;
- (void)fontPickerComponentViewControllerDidChangeHeight:(PREditingFontPickerComponentViewController *)arg1;
- (bool)fontPickerComponentViewControllerShouldShowWeightSliderForSelectedFont:(PREditingFontPickerComponentViewController *)arg1;

@end
