
@interface HDHealthServiceManager : NSObject <CBCentralManagerPrivateDelegate, CBPairingAgentDelegate> {
    CBUUID * _allServicesUUID;
    NSMutableDictionary * _bluetoothUpdateHandlers;
    CBCentralManager * _central;
    NSMutableDictionary * _connectedPeripheralsByPeripheralUUID;
    NSMutableDictionary * _connectionInfosByPeripheralUUID;
    HDIdentifierTable * _connectionInfosTable;
    NSLock * _connectionLock;
    HDDataCollectionManager * _dataCollectionManager;
    NSMutableDictionary * _discoveryInfosByServiceUUID;
    HDIdentifierTable * _discoveryInfosTable;
    NSLock * _discoveryLock;
    int  _privacyNotificationToken;
    NSObject<OS_dispatch_source> * _privateModeTimer;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _scanServiceUUIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_healthServiceForPeriperalID:(id)arg1 serviceType:(long long)arg2;
- (id)allServicesWithError:(id*)arg1;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 willRestoreState:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)characteristicReceived:(id)arg1 device:(id)arg2;
- (unsigned long long)connectHealthService:(id)arg1 connectionOptions:(unsigned long long)arg2 sessionHandler:(id /* block */)arg3 dataHandler:(id /* block */)arg4 mfaSuccessHandler:(id /* block */)arg5 autoPairData:(id)arg6 error:(id*)arg7;
- (unsigned long long)connectHealthService:(id)arg1 sessionHandler:(id /* block */)arg2 dataHandler:(id /* block */)arg3 characteristicsHandler:(id /* block */)arg4 error:(id*)arg5;
- (unsigned long long)connectHealthService:(id)arg1 sessionHandler:(id /* block */)arg2 dataHandler:(id /* block */)arg3 error:(id*)arg4;
- (void)dealloc;
- (void)disconnectHealthService:(unsigned long long)arg1;
- (unsigned long long)discoverHealthServicesWithType:(long long)arg1 timeout:(unsigned long long)arg2 alwaysNotify:(bool)arg3 handler:(id /* block */)arg4 error:(id*)arg5;
- (void)discoveredCharacteristics:(id)arg1 forDevice:(id)arg2 service:(id)arg3;
- (void)discoveredServices:(id)arg1 forPeripheral:(id)arg2;
- (void)enablePrivateModeForSessionWithIdentifier:(id)arg1;
- (void)getProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedPropertyNamesWithHandler:(id /* block */)arg1;
- (bool)healthUpdatesEnabledFromDevice:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 centralManager:(id)arg2 queue:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (void)performOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)releasePrivateMode;
- (void)resetOOBState;
- (id)retrieveOOBData:(id*)arg1;
- (id)reviewSavedHealthServiceSessionsWithError:(id*)arg1;
- (void)sendBluetoothStatusUpdatesForServer:(id)arg1 updateHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)servicesInvalidatedForDevice:(id)arg1 withError:(id)arg2;
- (bool)setHealthUpdatesEnabled:(bool)arg1 fromDevice:(id)arg2 error:(id*)arg3;
- (void)stopDiscoveryWithIdentifier:(unsigned long long)arg1;
- (void)unpairHealthServiceIfNecessary:(id)arg1;
- (void)writeCharacteristic:(id)arg1 onSession:(unsigned long long)arg2 expectResponse:(bool)arg3 completion:(id /* block */)arg4;

@end
