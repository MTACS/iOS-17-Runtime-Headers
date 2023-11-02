
@interface SBSSwitcherDemoCommands : NSObject <SBSSwitcherDemoCommandsServerToClientInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectionQueue_invalidate;
- (void)_connectionQueue_setupAndActivate;
- (id)_standardizedAbsolutePathForPath:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)loadStashedSwitcherModelFromPath:(id)arg1;
- (bool)setShouldDisableSwitcherModelUpdates:(bool)arg1;
- (bool)stashSwitcherModelToPath:(id)arg1;
- (bool)updateHiddenApplicationBundleIDs:(id)arg1;

@end
