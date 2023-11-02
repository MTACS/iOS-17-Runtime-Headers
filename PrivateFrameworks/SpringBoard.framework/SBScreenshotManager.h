
@interface SBScreenshotManager : NSObject {
    <SBScreenshotManagerDataSource> * _dataSource;
    _SBScreenshotPersistenceCoordinator * _persistenceCoordinator;
    SBSceneManagerCoordinator * _sceneManagerCoordinator;
}

@property (nonatomic, readonly) <SBScreenshotManagerDataSource> *dataSource;
@property (getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:, nonatomic, retain) _SBScreenshotPersistenceCoordinator *persistenceCoordinator;
@property (getter=_sceneManagerCoordinator, setter=_setSceneManagerCoordinator:, nonatomic, retain) SBSceneManagerCoordinator *sceneManagerCoordinator;

- (void).cxx_destruct;
- (id)_fetchEligibleScreenshotProvidersForSnapshotting;
- (id)_initWithDataSource:(id)arg1 persistenceCoordinator:(id)arg2 sceneManagerCoordinator:(id)arg3;
- (id)_persistenceCoordinator;
- (id)_providerForScreen:(id)arg1;
- (id)_sceneManagerCoordinator;
- (void)_setPersistenceCoordinator:(id)arg1;
- (void)_setSceneManagerCoordinator:(id)arg1;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)saveScreenshots;
- (void)saveScreenshotsWithCompletion:(id /* block */)arg1;

@end
