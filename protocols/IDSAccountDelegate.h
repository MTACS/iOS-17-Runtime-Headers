
@protocol IDSAccountDelegate <NSObject>

@optional

- (void)account:(IDSAccount *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)account:(IDSAccount *)arg1 devicesChanged:(NSArray *)arg2;
- (void)account:(IDSAccount *)arg1 isActiveChanged:(bool)arg2;
- (void)account:(IDSAccount *)arg1 nearbyDevicesChanged:(NSArray *)arg2;

@end
