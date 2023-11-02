
@interface SBRemoteAlertHandleServer : NSObject <BSServiceConnectionListenerDelegate, SBRemoteTransientOverlaySessionObserver, SBSRemoteAlertHandleServiceServerInterface> {
    NSMutableArray * _activeConnections;
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    FBServiceClientAuthenticator * _legacyClientAuthenticator;
    NSObject<OS_dispatch_queue> * _queue;
    SBRemoteTransientOverlaySessionManager * _sessionManager;
    NSMapTable * _sessionToConnections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1 forSession:(id)arg2;
- (void)_handleDisconnectForServiceConnection:(id)arg1;
- (void)_removeConnection:(id)arg1 forSession:(id)arg2;
- (bool)_shouldAllowAuditToken:(id)arg1 forDefinition:(id)arg2;
- (void)activate;
- (oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2;
- (id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (void)dealloc;
- (id)initWithSessionManager:(id)arg1;
- (oneway void)invalidateRemoteAlertHandleWithID:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3;
- (void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
- (void)remoteTransientOverlaySessionDidActivate:(id)arg1;
- (void)remoteTransientOverlaySessionDidDeactivate:(id)arg1;

@end
