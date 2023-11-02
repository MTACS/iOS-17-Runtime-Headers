
@interface SCROBrailleDisplayAutoDetector : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    NSMutableArray * _bleIdentifiers;
    CBCentralManager * _centralManager;
    CBPeripheral * _connectedPeripheral;
    bool  _isDetectingDisplays;
    NSMutableDictionary * _iteratorDict;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _serialSource;
}

@property (retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedDetector;

- (void).cxx_destruct;
- (void)_addBLEPeripheral:(id)arg1 central:(id)arg2;
- (void)_autodetectIOServices:(id)arg1;
- (void)_detectSerialPorts:(id)arg1;
- (id)_driverBundleIdentifiers;
- (void)_initializeAutodetectSerialPorts:(id)arg1;
- (void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2;
- (void)_registerForSerialPortNotifications;
- (bool)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3;
- (id)_serialPortMatchingDictionary;
- (void)addAutodetectBLEIdentifier:(id)arg1;
- (id)centralManager;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)detectDisplays;
- (id)init;
- (bool)isAutoDetectEnabled;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)queue;
- (void)removeAutodetectBLEIdentifier:(id)arg1;
- (void)serialPortsWerePublished:(unsigned int)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startBLEAutodetect;
- (void)stopDetectingDisplays;

@end
