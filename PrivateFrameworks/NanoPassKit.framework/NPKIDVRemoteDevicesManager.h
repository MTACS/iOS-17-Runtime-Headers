
@interface NPKIDVRemoteDevicesManager : NSObject <NPKBiometricPassPreflightManagerDataSource, NPKIDVRemoteDeviceConnectionCoordinatorObserver> {
    NPKIDVRemoteDeviceConnectionCoordinator * _connectionCoordinator;
    <NPKIDVRemoteDevicesManagerDataSource> * _dataSource;
    NPKIDVRemoteDeviceServiceEventsCoordinator * _eventsCoordinator;
    NPKBiometricPassPreflightManager * _preflightManager;
    NPKIDVRemoteDeviceSessionService * _remoteDeviceService;
}

@property (nonatomic, readonly) <NPKIDVRemoteDevicesManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDeviceDidUnpair:(id)arg1;
- (void)_registerForDeviceEvents;
- (void)_teardownConnections;
- (void)biometricPassPreflightManager:(id)arg1 provisionedCredentialCountsForType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)biometricPassPreflightManagerPairedDeviceOSVersion:(id)arg1;
- (id)dataSource;
- (void)deviceDidBecomeActive:(id)arg1;
- (void)deviceDidBecomeInactive;
- (id)initWithDataSource:(id)arg1;
- (void)remoteDeviceConnectionCoordinator:(id)arg1 didReceivePrearmStatusUpdate:(long long)arg2;

@end
