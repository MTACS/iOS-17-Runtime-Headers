
@protocol HAP2AccessoryServerTransportFactory <NSObject>

@required

- (<HAP2AccessoryServerTransport> *)createTransportWithAccessoryInfo:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg1 discovery:(id <HAP2AccessoryServerDiscovery>)arg2;

@end
