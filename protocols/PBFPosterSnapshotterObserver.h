
@protocol PBFPosterSnapshotterObserver <NSObject>

@required

- (void)snapshotterDidTakeSnapshots:(PBFPosterSnapshotter *)arg1 snapshotsByDefinition:(NSDictionary *)arg2;

@optional

- (void)snapshotter:(PBFPosterSnapshotter *)arg1 failedWithError:(NSError *)arg2;

@end
