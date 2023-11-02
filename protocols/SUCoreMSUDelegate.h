
@protocol SUCoreMSUDelegate <NSObject>

@optional

- (void)msuAnomaly:(NSError *)arg1;
- (void)msuApplied;
- (void)msuApplyFailed:(NSError *)arg1;
- (void)msuApplyProgress:(SUCoreProgress *)arg1;
- (void)msuBrainLoadFailed:(NSError *)arg1;
- (void)msuBrainLoadProgress:(SUCoreProgress *)arg1;
- (void)msuBrainLoadStalled:(SUCoreProgress *)arg1;
- (void)msuBrainLoaded:(SUCoreProgress *)arg1;
- (void)msuFDRRecoveryPreflightFailed:(NSError *)arg1;
- (void)msuFDRRecoveryPreflighted;
- (void)msuPersonalizePreflightFailed:(NSError *)arg1;
- (void)msuPersonalizePreflighted;
- (void)msuPrepareFailed:(NSError *)arg1;
- (void)msuPrepareProgress:(SUCoreProgress *)arg1;
- (void)msuPrepared:(SUCoreProgress *)arg1;
- (void)msuPrerequisiteCheckPreflightFailed:(NSError *)arg1;
- (void)msuPrerequisiteCheckPreflighted;
- (void)msuRemoveFailed:(NSError *)arg1;
- (void)msuRemoved;
- (void)msuResumeFailed:(NSError *)arg1;
- (void)msuResumed;
- (void)msuRollbackApplyFailed:(NSError *)arg1;
- (void)msuRollbackApplySuccess;
- (void)msuRollbackFailed:(NSError *)arg1;
- (void)msuRollbackPrepareSuccess;
- (void)msuRollbackResumeSuccess;
- (void)msuRollbackSuspendSuccess;
- (void)msuSUDownloadPreflightFailed:(NSError *)arg1;
- (void)msuSUDownloadPreflighted;
- (void)msuSuspendFailed:(NSError *)arg1;
- (void)msuSuspended;
- (void)msuWakeupPreflightFailed:(NSError *)arg1;
- (void)msuWakeupPreflighted;

@end
