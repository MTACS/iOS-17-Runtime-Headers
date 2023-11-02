
@protocol DIDeviceDelegate <NSObject>

@optional

- (void)device:(DIDevice *)arg1 didUpdateState:(long long)arg2;
- (void)deviceDidChange:(DIDevice *)arg1;

@end
