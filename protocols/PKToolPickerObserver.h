
@protocol PKToolPickerObserver <NSObject>

@optional

- (void)toolPickerFramesObscuredDidChange:(PKToolPicker *)arg1;
- (void)toolPickerIsRulerActiveDidChange:(PKToolPicker *)arg1;
- (void)toolPickerSelectedToolDidChange:(PKToolPicker *)arg1;
- (void)toolPickerVisibilityDidChange:(PKToolPicker *)arg1;

@end
