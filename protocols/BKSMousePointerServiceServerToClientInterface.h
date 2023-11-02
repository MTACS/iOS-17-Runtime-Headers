
@protocol BKSMousePointerServiceServerToClientInterface <NSObject>

@required

- (oneway void)pointerGlobalDevicePreferencesDidChange:(BKSMousePointerDevicePreferences *)arg1;
- (oneway void)pointingDevicesDidChange:(NSSet<__BKSMousePointerDevice__> *)arg1;

@end
