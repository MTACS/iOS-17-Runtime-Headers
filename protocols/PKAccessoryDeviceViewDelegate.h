
@protocol PKAccessoryDeviceViewDelegate <NSObject>

@required

- (void)accessoryDeviceDidChangeStateTo:(long long)arg1;
- (void)accessoryDeviceDidReachHardTimeout;

@end
