
@interface SBSRemoteAlertHandleXPCClient : NSObject <SBSRemoteAlertHandleClient, SBSRemoteAlertHandleServiceClientInterface> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionAccessQueue;
    bool  _connectionActivated;
    bool  _connectionInvalidated;
    NSMutableDictionary * _handleIDToHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)_handleError:(id)arg1;
- (void)_invalidateHandleForHandleID:(id)arg1 withError:(id)arg2;
- (void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
- (id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (id)init;
- (void)invalidateRemoteAlertHandle:(id)arg1;
- (oneway void)remoteAlertHandleWithID:(id)arg1 didInvalidateWithError:(id)arg2;
- (oneway void)remoteAlertHandleWithIDDidActivate:(id)arg1;
- (oneway void)remoteAlertHandleWithIDDidDeactivate:(id)arg1;
- (id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(bool)arg2 configurationContext:(id)arg3;

@end
