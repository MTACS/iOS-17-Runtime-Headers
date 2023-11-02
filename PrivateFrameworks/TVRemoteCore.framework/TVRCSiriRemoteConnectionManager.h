
@interface TVRCSiriRemoteConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBDiscovery * _cbDiscovery;
    CBCentralManager * _centralManager;
    NSMutableDictionary * _connectedSiriRemotes;
    NSMutableDictionary * _didConnectHandlerBlockMap;
    NSMutableSet * _discoveredPeripherals;
    id /* block */  _findingSessionStateChangedHandler;
    NSMutableSet * _remoteInfoSet;
    long long  _state;
}

@property (nonatomic, retain) CBDiscovery *cbDiscovery;
@property (nonatomic, retain) CBCentralManager *centralManager;
@property (nonatomic, retain) NSMutableDictionary *connectedSiriRemotes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *didConnectHandlerBlockMap;
@property (nonatomic, retain) NSMutableSet *discoveredPeripherals;
@property (nonatomic, copy) id /* block */ findingSessionStateChangedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *remoteInfoSet;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_removePeripheral:(id)arg1;
- (void)_sendEnableMessage:(bool)arg1 forRemote:(id)arg2;
- (void)_startCBScanIfNeeded;
- (void)_startDiscoveryForRemoteWithInfo:(id)arg1 didConnectHandler:(id /* block */)arg2;
- (void)_stopDiscoveryForRemoteWithInfo:(id)arg1;
- (void)_stopScanning;
- (void)_updateFindingSessionState:(long long)arg1;
- (id)cbDiscovery;
- (id)centralManager;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)connectedSiriRemotes;
- (id)didConnectHandlerBlockMap;
- (id)discoveredPeripherals;
- (void)enableFastFindMy:(bool)arg1 forRemoteWithInfo:(id)arg2;
- (id /* block */)findingSessionStateChangedHandler;
- (id)init;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (id)remoteInfoSet;
- (void)setCbDiscovery:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setConnectedSiriRemotes:(id)arg1;
- (void)setDidConnectHandlerBlockMap:(id)arg1;
- (void)setDiscoveredPeripherals:(id)arg1;
- (void)setFindingSessionStateChangedHandler:(id /* block */)arg1;
- (void)setRemoteInfoSet:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)teardown;

@end
