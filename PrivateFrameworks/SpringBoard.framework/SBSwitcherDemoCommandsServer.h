
@interface SBSwitcherDemoCommandsServer : NSObject <BSServiceConnectionListenerDelegate, SBSSwitcherDemoCommandsClientToServerInterface> {
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    SBSwitcherDemoFilteringController * _demoFilteringController;
    NSObject<OS_dispatch_queue> * _queue;
    SBRecentAppLayouts * _recents;
    SBAppSwitcherSettings * _switcherSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_removeConnection:(id)arg1;
- (id)initWithRecentAppLayouts:(id)arg1 demoFilteringController:(id)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (bool)loadStashedSwitcherModelFromPath:(id)arg1;
- (bool)setShouldDisableSwitcherModelUpdates:(id)arg1;
- (bool)stashSwitcherModelToPath:(id)arg1;
- (bool)updateHiddenApplicationBundleIDs:(id)arg1;

@end
