
@interface NoOpBackupController : NSObject <BackupControllerProviding>

- (void)setFirstSyncDateToNow;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)arg1;

@end
