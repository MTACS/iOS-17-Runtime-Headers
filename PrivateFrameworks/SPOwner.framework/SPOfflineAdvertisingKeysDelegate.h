
@interface SPOfflineAdvertisingKeysDelegate : NSObject <CBPeripheralManagerPrivateDelegate> {
    SPLocalBeaconManager * _beaconManager;
    bool  _inLowPowerMode;
    CBPeripheralManager * _peripheralManager;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
}

@property (nonatomic, retain) SPLocalBeaconManager *beaconManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inLowPowerMode;
@property (nonatomic, retain) CBPeripheralManager *peripheralManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)beaconManager;
- (void)enterLowPowerMode;
- (bool)inLowPowerMode;
- (id)initWithBeaconManager:(id)arg1;
- (id)peripheralManager;
- (void)peripheralManager:(id)arg1 offlineAdvPayloadRequestedWithReason:(long long)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)processKeyResponse:(id)arg1;
- (id)proxy;
- (id)queue;
- (id)remoteInterface;
- (id)serviceDescription;
- (id)session;
- (void)setBeaconManager:(id)arg1;
- (void)setInLowPowerMode:(bool)arg1;
- (void)setPeripheralManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (id)syncProxy;
- (long long)transformReason:(long long)arg1;
- (id)userAgentProxy;
- (id)userAgentSyncProxy;

@end
