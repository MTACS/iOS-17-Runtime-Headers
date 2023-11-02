
@interface SafariCloudBookmarksMigrationCoordinator : WBSCloudBookmarksMigrationCoordinator <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)migrationCoordinator;

- (void)_detectedLocalMigrationStateTransition:(id)arg1;
- (bool)_evaluateMigrationEnabled;
- (void)dealloc;
- (void)getLocalMigrationStateForMigrationCoordinator:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSyncAgent:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
