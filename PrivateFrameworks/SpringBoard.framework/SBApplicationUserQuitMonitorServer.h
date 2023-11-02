
@interface SBApplicationUserQuitMonitorServer : NSObject <BSServiceConnectionListenerDelegate> {
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_removeConnection:(id)arg1;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1;

@end
