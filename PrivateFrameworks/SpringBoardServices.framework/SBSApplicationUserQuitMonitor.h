
@interface SBSApplicationUserQuitMonitor : NSObject <SBSApplicationUserQuitMonitorServerToClientInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <SBSApplicationUserQuitMonitorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectionQueue_invalidate;
- (void)_connectionQueue_setupAndActivate;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1;

@end
