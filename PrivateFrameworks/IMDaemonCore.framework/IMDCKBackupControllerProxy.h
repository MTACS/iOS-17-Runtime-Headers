
@interface IMDCKBackupControllerProxy : NSObject <BackupControllerProviding>

+ (id)sharedInstance;

- (void)setFirstSyncDateToNow;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)arg1;

@end
