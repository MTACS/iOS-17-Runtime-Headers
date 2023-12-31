
@protocol TKTonePickerViewControllerDelegate <NSObject>

@optional

- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 didChangeIgnoreMute:(bool)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 didDismissVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 willPresentVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;

@end
