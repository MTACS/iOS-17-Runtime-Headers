
@interface WiFiP2PTrafficRegistrationReservation : NSObject <WiFiP2PXPCConnectionDelegate> {
    unsigned long long  _enabledCount;
    NSString * _service;
    bool  _showsUIAlertOnError;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic) bool showsUIAlertOnError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)handleConnectionEstablishedWithProxy:(id)arg1;
- (id)initForService:(id)arg1;
- (void)invalidate;
- (id)remoteObjectInterface;
- (id)service;
- (void)setShowsUIAlertOnError:(bool)arg1;
- (bool)showsUIAlertOnError;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)trafficRegistrationConfiguration;

@end
