
@interface CARSessionRequestClient : NSObject {
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic, retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)cancelRequests;
- (void)dealloc;
- (void)prepareForRemovingWiFiUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;
- (void)startAdvertisingCarPlayControlForUSB;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg1;
- (void)startSessionWithHost:(id)arg1 requestIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)stoppedSessionForHostIdentifier:(id)arg1;

@end
