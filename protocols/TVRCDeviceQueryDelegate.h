
@protocol TVRCDeviceQueryDelegate <NSObject>

@optional

- (void)deviceQueryDidUpdateDevices:(TVRCDeviceQuery *)arg1;
- (void)didUpdateSuggestedDevices:(NSArray *)arg1;

@end
