
@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice> {
    CBCentralManager * _centralManager;
    CBPeripheral * _peripheral;
}

@property (nonatomic, readonly) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (id)centralManager;
- (long long)compare:(id)arg1;
- (void)connect;
- (bool)connected;
- (bool)connecting;
- (id)description;
- (void)disconnect;
- (id)identifier;
- (id)initWithPeripheral:(id)arg1 manager:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)paired;
- (id)peripheral;
- (void)unpair;

@end
