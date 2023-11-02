
@protocol PBFPosterSnapshotManagerObserving <NSObject>

@required

- (void)snapshotManager:(PBFPosterSnapshotManager *)arg1 didUpdateSnapshotForPath:(PRSServerPosterPath *)arg2 forDefinition:(PBFPosterSnapshotDefinition *)arg3;

@end
