
@protocol _UIColorPickerViewHostingImpl <_UIRemoteSheetContaining>

@required

- (UIColorPickerViewController *)delegateColorPickerViewController;
- (void)setDelegateColorPickerViewController:(UIColorPickerViewController *)arg1;
- (void)setRemoteConfiguration:(_UIColorPickerViewControllerConfiguration *)arg1;
- (void)setRemoteSelectedColor:(UIColor *)arg1;
- (void)setupRemoteHosting;

@end
