
@protocol BKSMousePointerDeviceObserver <NSObject>

@optional

- (void)mousePointerDevicesDidChange:(NSSet *)arg1;
- (void)mousePointerDevicesDidConnect:(NSSet *)arg1;
- (void)mousePointerDevicesDidDisconnect:(NSSet *)arg1;

@end
