
@protocol CDPDevicePickerDelegate

@required

- (void)devicePicker:(CDPDevicePickerViewController *)arg1 didSelectDevice:(CDPDevice *)arg2;
- (NSArray *)devicePicker:(CDPDevicePickerViewController *)arg1 escapeOffersForDevices:(NSArray *)arg2;

@end
