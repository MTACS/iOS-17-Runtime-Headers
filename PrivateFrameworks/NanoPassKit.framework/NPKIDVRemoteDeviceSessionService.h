
@interface NPKIDVRemoteDeviceSessionService : NSObject <NSXPCListenerDelegate> {
    NPKBiometricPassPreflightManager * _preflightManager;
    NPKIDVRemoteDeviceConnectionCoordinator * _remoteDeviceConnectionCoordinator;
    NPKIDVRemoteDeviceServiceEventsCoordinator * _remoteDeviceEventCoordinator;
    NSMutableSet * _sessionServers;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_addServer:(id)arg1;
- (void)_removeServer:(id)arg1;
- (void)dealloc;
- (id)initWithRemoteDeviceEventsCoordinator:(id)arg1 connectionCoordinator:(id)arg2 preflightManager:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)teardownCurrentRemoteDeviceSessions;

@end
