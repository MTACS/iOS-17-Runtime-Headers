
@interface SBAccessibilityWindowHostingControllerServer : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate, SBSAccessibilityWindowHostingClientToServerInterface> {
    NSMutableArray * _activeConnections;
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    NSMapTable * _connectionToHostedContextIDs;
    NSMutableDictionary * _contextIDToScene;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginHostingWindowWithContextID:(unsigned int)arg1 atLevel:(double)arg2;
- (void)_endHostingWindowWithContextID:(unsigned int)arg1;
- (void)_handleDisconnectForServiceConnection:(id)arg1;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)registerWindowWithContextID:(id)arg1 atLevel:(id)arg2;
- (void)unregisterWindowWithContextID:(id)arg1;

@end
