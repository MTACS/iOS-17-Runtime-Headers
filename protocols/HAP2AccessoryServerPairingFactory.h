
@protocol HAP2AccessoryServerPairingFactory <NSObject>

@required

- (<HAP2AccessoryServerPairingDriver> *)createPairingDriverWithAccessoryInfo:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg1 transport:(id <HAP2AccessoryServerTransport>)arg2 secureTransportFactory:(id <HAP2AccessoryServerSecureTransportFactory>)arg3 encoding:(id <HAP2AccessoryServerEncoding>)arg4 operationQueue:(HAP2SerializedOperationQueue *)arg5;

@end
