
@protocol BTDevicePickerRemoteViewControllerHost

@required

- (void)didDismissWithResult:(long long)arg1 deviceAddress:(NSString *)arg2;
- (void)discoveredDevice:(NSString *)arg1 deviceAddress:(NSString *)arg2;

@end
