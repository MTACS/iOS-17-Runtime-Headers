
@protocol IRBiomeProviderObserverProtocol <NSObject>

@optional

- (void)provider:(IRBiomeProvider *)arg1 didUpdateDeviceWiFi:(BMDeviceWiFi *)arg2;
- (void)provider:(IRBiomeProvider *)arg1 didUpdateMediaRoute:(BMMediaRoute *)arg2;

@end
