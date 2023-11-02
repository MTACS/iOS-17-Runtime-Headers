
@interface DBSplashScreenAlert : NSObject <BSInvalidatable, DBSplashScreenDismissalServer, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle * _alertHandle;
    NSXPCConnection * _connection;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) SBSRemoteAlertHandle *alertHandle;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showAlertIfNecessary;
- (id)alertHandle;
- (void)connect;
- (id)connection;
- (id)init;
- (void)invalidate;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setAlertHandle:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setListener:(id)arg1;

@end
