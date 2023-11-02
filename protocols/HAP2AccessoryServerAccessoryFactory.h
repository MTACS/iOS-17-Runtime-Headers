
@protocol HAP2AccessoryServerAccessoryFactory <NSObject>

@required

- (<HAP2AccessoryPrivate> *)accessoryWithAccessoryServer:(id <HAP2PairedAccessoryServerPrivate>)arg1 instanceID:(unsigned long long)arg2 discoveredServices:(NSArray *)arg3;

@end
