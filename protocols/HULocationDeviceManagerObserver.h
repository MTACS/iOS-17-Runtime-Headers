
@protocol HULocationDeviceManagerObserver <NSObject>

@optional

- (void)locationDeviceManager:(HULocationDeviceManager *)arg1 didUpdateActiveLocationDevice:(HULocationDevice *)arg2;
- (void)locationDeviceManager:(HULocationDeviceManager *)arg1 didUpdateAvailableLocationDevices:(NSSet *)arg2;

@end
