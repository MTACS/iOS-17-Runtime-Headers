
@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate> {
    CBPeripheral * _cbPeripheral;
    HKDevice * _deviceInformation;
    bool  _discoveredServices;
    NSMutableDictionary * _healthServices;
    NSString * _name;
    bool  _privateMode;
    HDProfile * _profile;
    NSMutableDictionary * _propertiesAwaiting;
    NSMutableDictionary * _serviceForProperty;
    HDHealthServiceManager * _serviceManager;
    NSObject<OS_dispatch_queue> * _servicesQueue;
}

@property (nonatomic, readonly) CBPeripheral *cbPeripheral;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDevice *deviceInformation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) NSString *name;
@property (readonly) long long state;
@property (readonly) NSString *stateDescription;
@property (readonly) Class superclass;

+ (id)implementedProperties;

- (void).cxx_destruct;
- (void)addHealthService:(id)arg1;
- (id)cbPeripheral;
- (id)deviceInformation;
- (void)disconnectServices;
- (void)discoverServices;
- (void)getProperty:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasServiceWithUUID:(id)arg1;
- (id)healthServiceForType:(long long)arg1;
- (id)identifier;
- (id)initWithCBPeripheral:(id)arg1 name:(id)arg2 serviceManager:(id)arg3 profile:(id)arg4;
- (id)name;
- (void)performOperation:(id)arg1 withParameters:(id)arg2 completion:(id /* block */)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)service:(id)arg1 didReadProperty:(id)arg2 value:(id)arg3 error:(id)arg4;
- (long long)state;
- (id)stateDescription;
- (bool)updateCBPeripheral:(id)arg1;
- (void)writeCharacteristic:(id)arg1 expectResponse:(bool)arg2 completion:(id /* block */)arg3;

@end
