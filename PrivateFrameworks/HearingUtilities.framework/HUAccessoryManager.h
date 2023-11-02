
@interface HUAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    bool  _bluetoothAvailable;
    NSObject<OS_dispatch_queue> * _bluetoothCentralQueue;
    bool  _centralIsOn;
    CBCentralManager * _centralManager;
    NSMutableDictionary * _discoveryUpdates;
    NSMutableDictionary * _loggingUpdates;
    NSArray * _peripherals;
    NSMutableArray * _registeredCharacteristics;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _syncLock;
    NSMutableDictionary * _updateUpdates;
    NSMutableDictionary * _uuidToAddress;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *bluetoothCentralQueue;
@property (nonatomic, retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *discoveryUpdates;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *loggingUpdates;
@property (retain) NSArray *peripherals;
@property (retain) NSMutableArray *registeredCharacteristics;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *updateUpdates;
@property (retain) NSMutableDictionary *uuidToAddress;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)availableAddresses;
- (id)availableAddressesWithCharacteristicSupport:(id)arg1;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (id)bluetoothCentralQueue;
- (id)centralManager;
- (void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)characteristicWithUUID:(id)arg1 forPeripheral:(id)arg2;
- (void)discoverAccessories;
- (id)discoveryUpdates;
- (id)init;
- (void)logMessage:(id)arg1;
- (id)loggingUpdates;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)peripherals;
- (void)readValueForCharacteristicUUID:(id)arg1;
- (void)registerDiscoveryBlock:(id /* block */)arg1 withListener:(id)arg2;
- (void)registerLoggingBlock:(id /* block */)arg1 withListener:(id)arg2;
- (void)registerUpdateBlock:(id /* block */)arg1 forCharacteristicUUIDs:(id)arg2 withListener:(id)arg3;
- (id)registeredCharacteristics;
- (void)removeDiscoveredAccessories;
- (void)setBluetoothCentralQueue:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setDiscoveryUpdates:(id)arg1;
- (void)setLoggingUpdates:(id)arg1;
- (void)setNotify:(bool)arg1 forCharacteristicUUIDs:(id)arg2;
- (void)setPeripherals:(id)arg1;
- (void)setRegisteredCharacteristics:(id)arg1;
- (void)setUpdateUpdates:(id)arg1;
- (void)setUuidToAddress:(id)arg1;
- (id)sharedQueue;
- (void)updateBluetoothAvailability;
- (void)updateNotify:(bool)arg1 forPeripheral:(id)arg2 withCharacteristicUUIDs:(id)arg3;
- (id)updateUpdates;
- (id)uuidToAddress;
- (void)writeValue:(id)arg1 forCharacteristicUUID:(id)arg2 andAddress:(id)arg3;

@end
