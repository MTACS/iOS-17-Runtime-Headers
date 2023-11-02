
@interface PowerUISmartChargeClientAudioAccessories : NSObject <PowerUISmartChargeClientManagingAudioAccessories> {
    NSString * _clientName;
    NSXPCConnection * _connection;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)clearLastActionForDevice:(id)arg1;
- (id)clientName;
- (bool)connectAndDisableOBCforDevice:(id)arg1 withError:(id*)arg2;
- (void)connectAndDisableOBCforDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (id)connection;
- (void)dealloc;
- (void)deleteRecordsForDevice:(id)arg1;
- (bool)disableSmartChargingForDevice:(id)arg1 withError:(id*)arg2;
- (void)disableSmartChargingForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)enableSmartChargingForDevice:(id)arg1 withError:(id*)arg2;
- (void)enableSmartChargingForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (void)engageUntil:(id)arg1 forDevice:(id)arg2 overrideAllSignals:(bool)arg3;
- (void)fakeConnectionForDevice:(id)arg1;
- (id)fullChargeDeadlineForDevice:(id)arg1 withError:(id*)arg2;
- (void)fullChargeDeadlineForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (id)getAvailableDevices;
- (id)getStatusForDevice:(id)arg1;
- (id)initWithClientName:(id)arg1;
- (unsigned long long)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withError:(id*)arg2;
- (void)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (unsigned long long)lastActionForDevice:(id)arg1;
- (id)lastUsedLeewayWithError:(id*)arg1;
- (id)log;
- (void)setClientName:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setFakeConnectionStatusTo:(bool)arg1;
- (void)setLog:(id)arg1;
- (bool)setState:(unsigned long long)arg1 forDevice:(id)arg2 withError:(id*)arg3;
- (void)startMockingBluetoothForFakeDevice:(id)arg1;
- (void)stopMockingBluetooth;
- (bool)temporarilyDisableSmartChargingForDevice:(id)arg1 withError:(id*)arg2;
- (void)temporarilyDisableSmartChargingForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)temporarilyEnableChargingForDevice:(id)arg1 withError:(id*)arg2;
- (void)temporarilyEnableChargingForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (void)timeSeriesForDevice:(id)arg1;
- (id)unfilteredDeadlineForDevice:(id)arg1 withError:(id*)arg2;
- (void)unfilteredDeadlineForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)updateOBCDeadline:(id)arg1 forDevice:(id)arg2 withError:(id*)arg3;
- (void)updateOBCDeadline:(id)arg1 forDevice:(id)arg2 withHandler:(id /* block */)arg3;

@end
