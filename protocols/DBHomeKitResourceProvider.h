
@protocol DBHomeKitResourceProvider

@required

- (DBLocationManager *)locationManager;
- (DBNetworkPathMonitor *)networkPathMonitor;

@end
