
@protocol PBUIURLSourceDelegate <NSObject, PBUIColorStatisticsDelegate>

@required

- (void)snapshotSource:(PBUIURLBackedSnapshotSource *)arg1 failedToReadColorStatisticsAtURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)snapshotSource:(PBUIURLBackedSnapshotSource *)arg1 failedToReadSnapshotAtURL:(NSURL *)arg2 error:(NSError *)arg3;

@end
