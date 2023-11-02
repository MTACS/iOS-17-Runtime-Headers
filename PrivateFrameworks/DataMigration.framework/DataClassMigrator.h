
@interface DataClassMigrator : NSObject {
    NSDictionary * _context;
    bool  _didUpgrade;
    NSString * _dmBundleIdentifier;
    NSString * _restoredBackupBuildVersion;
    NSString * _restoredBackupDeviceName;
    NSString * _restoredBackupProductType;
    unsigned int  _userDataDisposition;
}

@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic, readonly) bool didMigrateBackupFromDifferentDevice;
@property (nonatomic, readonly) bool didRestoreFromBackup;
@property (nonatomic, readonly) bool didRestoreFromCloudBackup;
@property (nonatomic) bool didUpgrade;
@property (nonatomic, copy) NSString *dmBundleIdentifier;
@property (nonatomic, retain) NSString *restoredBackupBuildVersion;
@property (nonatomic, retain) NSString *restoredBackupDeviceName;
@property (nonatomic, retain) NSString *restoredBackupProductType;
@property (nonatomic, readonly) bool shouldPreserveSettingsAfterRestore;
@property (nonatomic) unsigned int userDataDisposition;
@property (nonatomic, readonly) bool wasPasscodeSetInBackup;

+ (id)dataClassMigratorForBundleAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (bool)didMigrateBackupFromDifferentDevice;
- (bool)didRestoreFromBackup;
- (bool)didRestoreFromCloudBackup;
- (bool)didUpgrade;
- (id)dmBundleIdentifier;
- (bool)performMigration;
- (id)restoredBackupBuildVersion;
- (id)restoredBackupDeviceName;
- (id)restoredBackupProductType;
- (void)setContext:(id)arg1;
- (void)setDidUpgrade:(bool)arg1;
- (void)setDmBundleIdentifier:(id)arg1;
- (void)setRestoredBackupBuildVersion:(id)arg1;
- (void)setRestoredBackupDeviceName:(id)arg1;
- (void)setRestoredBackupProductType:(id)arg1;
- (void)setUserDataDisposition:(unsigned int)arg1;
- (bool)shouldPreserveSettingsAfterRestore;
- (unsigned int)userDataDisposition;
- (bool)wasPasscodeSetInBackup;

@end
