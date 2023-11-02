
@interface CPLCleanupTask : CPLEngineSyncTask

- (void)_cleanupSharingFlags;
- (void)_doOneIteration;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
