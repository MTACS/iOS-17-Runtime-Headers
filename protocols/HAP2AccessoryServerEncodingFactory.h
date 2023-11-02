
@protocol HAP2AccessoryServerEncodingFactory <NSObject>

@required

- (<HAP2AccessoryServerEncoding> *)createEncodingWithOperationQueue:(HAP2SerializedOperationQueue *)arg1 accessoryServerMetadata:(id <HAP2AccessoryServerMetadata>)arg2 encodingFeatures:(unsigned long long)arg3;

@end
