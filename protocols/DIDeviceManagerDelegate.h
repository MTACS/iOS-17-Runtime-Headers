
@protocol DIDeviceManagerDelegate <NSObject>

@optional

- (void)manager:(DIDeviceManager *)arg1 didAddDevice:(DIDevice *)arg2;
- (void)manager:(DIDeviceManager *)arg1 didRemoveDevice:(DIDevice *)arg2;
- (void)managerDidUpdateDevices:(DIDeviceManager *)arg1;

@end
