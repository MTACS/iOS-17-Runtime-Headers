
@protocol DIDeviceListDelegate

@required

- (void)didAddDevice:(DIDevice *)arg1;
- (void)didLoadDevices:(NSArray *)arg1;
- (void)didRemoveDevice:(DIDevice *)arg1;

@end
