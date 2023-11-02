
@protocol HAP2AccessoryServerPairingDriver <NSObject>

@required

- (<HAP2Cancelable> *)pairAccessory:(id <HAP2UnpairedAccessoryServer>)arg1 delegate:(id <HAP2AccessoryServerPairingDriverDelegate>)arg2;

@end
