
@protocol _UIFontPickerViewHostingImpl <_UIRemoteSheetContaining>

@required

- (UIFontPickerViewController *)delegateFontPickerViewController;
- (void)setDelegateFontPickerViewController:(UIFontPickerViewController *)arg1;
- (void)setHideNavigationBar:(bool)arg1;
- (void)setRemoteSelectedFontDescriptors:(NSArray *)arg1 scrollToVisible:(bool)arg2;
- (void)setupRemoteHosting;

@end
