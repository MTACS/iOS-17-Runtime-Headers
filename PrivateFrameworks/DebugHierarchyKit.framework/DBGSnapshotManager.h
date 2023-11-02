
@interface DBGSnapshotManager : NSObject {
    DBGSnapshotAssetManager * _assetManager;
    DBGDataCoordinator * _primaryDataCoordinator;
    DebugHierarchyRuntimeInfo * _runtimeInfo;
    DBGSnapshot * _snapshot;
}

@property (readonly) DBGSnapshotAssetManager *assetManager;
@property (readonly) DBGDataCoordinator *primaryDataCoordinator;
@property (readonly) DebugHierarchyRuntimeInfo *runtimeInfo;
@property (readonly) DBGSnapshot *snapshot;

+ (id)snapshotManagerWithSnapshot:(id)arg1 primaryDataCoordinator:(id)arg2;

- (void).cxx_destruct;
- (id)assetManager;
- (void)cancelAllRequests;
- (void)clearData;
- (id)initWithSnapshot:(id)arg1 primaryDataCoordinator:(id)arg2;
- (void)logMessage:(id)arg1;
- (id)primaryDataCoordinator;
- (id)runtimeInfo;
- (void)setPrimaryDataCoordinator:(id)arg1;
- (id)snapshot;

@end
