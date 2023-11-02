
@protocol HAP2AccessoryServerControllerFactory <NSObject>

@required

- (<HAP2AccessoryServerController> *)createControllerWithEncoding:(id <HAP2AccessoryServerEncoding>)arg1 secureTransport:(id <HAP2AccessoryServerSecureTransport>)arg2 operationQueue:(HAP2SerializedOperationQueue *)arg3;

@end
