
@protocol CPLEngineForceSyncTaskDelegate

@required

- (void)forceSyncTaskHasBeenCancelled:(CPLEngineForceSyncTask *)arg1;
- (void)forceSyncTaskHasBeenLaunched:(CPLEngineForceSyncTask *)arg1;

@end
