
@interface MCMMigrationStatus : NSObject {
    NSURL * _migrationFileURL;
    NSMutableDictionary * _migrationInfo;
}

@property (nonatomic, retain) NSURL *migrationFileURL;
@property (nonatomic, retain) NSMutableDictionary *migrationInfo;

+ (id)currentBuildVersion;

- (void).cxx_destruct;
- (void)_consolidateForUnifiedDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)arg1;
- (void)_consolidateForUserDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)arg1;
- (void)_consolidateSystemDaemonMigrationStatusWithLibraryURL:(id)arg1;
- (void)_consolidateUnifiedDaemonMigrationStatusWithLibraryURL:(id)arg1;
- (void)_consolidateUserDaemonMigrationStatusWithLibraryURL:(id)arg1;
- (id)_iso8601DateFormatter;
- (id)_readMigrationStatusFromDisk;
- (id)_readMigrationStatusFromDiskAtURL:(id)arg1;
- (void)_readStatusFromMarkerFileWithName:(id)arg1 andSetAsType:(id)arg2 libraryURL:(id)arg3;
- (void)_removeMarkerFileWithName:(id)arg1 libraryURL:(id)arg2;
- (bool)_writeMigrationStatusToDisk;
- (bool)hasMigrationOccurredForType:(id)arg1;
- (id)init;
- (id)initForMobileUserMigration;
- (id)initForSystemMigration;
- (bool)isBuildUpgrade;
- (id)migrationFileURL;
- (id)migrationInfo;
- (void)setMigrationCompleteForType:(id)arg1;
- (void)setMigrationFileURL:(id)arg1;
- (void)setMigrationInfo:(id)arg1;
- (void)writeCurrentBuildInfoToDisk;

@end
