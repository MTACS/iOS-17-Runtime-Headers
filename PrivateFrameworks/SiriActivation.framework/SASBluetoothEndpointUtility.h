
@interface SASBluetoothEndpointUtility : NSObject {
    NSString * _endpointType;
    NSObject<OS_dispatch_queue> * _serialBluetoothEndpointQueue;
}

@property (getter=_endpointType, setter=_setEndpointType:, retain) NSString *endpointType;

- (void).cxx_destruct;
- (id)_endpointType;
- (void)_registerListenersAndSetEndpointTypeWithNotification:(id)arg1;
- (void)_setEndpointType:(id)arg1;
- (void)_setEndpointTypeWithNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isConnectedToBluetoothVehicle;

@end
