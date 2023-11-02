
@protocol _UIColorPickerRemoteViewControllerHost <_UIColorPickerViewProvidingDelegate>

@required

- (void)_colorPickerDidUpdatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_colorPickerViewServiceDidTerminateWithError:(NSError *)arg1;

@end
