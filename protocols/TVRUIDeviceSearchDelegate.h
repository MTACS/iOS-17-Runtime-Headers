
@protocol TVRUIDeviceSearchDelegate <NSObject>

@required

- (void)deviceListUpdated:(NSArray *)arg1;

@optional

- (void)suggestedDevices:(NSArray *)arg1;

@end
