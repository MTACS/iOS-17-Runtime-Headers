
@protocol IRProximityProviderObserverProtocol <NSObject>

@required

- (void)provider:(IRProximityProvider *)arg1 didUpdateNearbyDevices:(IRNearbyDeviceContainerDO *)arg2;

@end
