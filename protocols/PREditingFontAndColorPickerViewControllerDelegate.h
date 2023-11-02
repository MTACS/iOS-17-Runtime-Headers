
@protocol PREditingFontAndColorPickerViewControllerDelegate <NSObject>

@optional

- (NSArray *)additionalFontConfigurationsForFontAndColorPickerViewController:(PREditingFontAndColorPickerViewController *)arg1;
- (void)fontAndColorPickerViewController:(PREditingFontAndColorPickerViewController *)arg1 didUpdateDesiredDetent:(double)arg2;
- (bool)fontAndColorPickerViewController:(PREditingFontAndColorPickerViewController *)arg1 shouldShowFontConfiguration:(PRTimeFontConfiguration *)arg2;
- (void)fontAndColorPickerViewControllerDidFinish:(PREditingFontAndColorPickerViewController *)arg1;

@end
