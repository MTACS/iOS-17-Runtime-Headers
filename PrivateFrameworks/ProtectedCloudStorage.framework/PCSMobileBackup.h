
@interface PCSMobileBackup : NSObject <MBManagerDelegate> {
    MBManager * _backupManager;
}

@property (retain) MBManager *backupManager;

+ (id)defaultMobileBackup;

- (void).cxx_destruct;
- (id)backupManager;
- (id)init;
- (bool)isBackupEnabled;
- (void)setBackupManager:(id)arg1;

@end
