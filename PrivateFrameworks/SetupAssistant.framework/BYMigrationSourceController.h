
@interface BYMigrationSourceController : NSObject {
    BYBuddyDaemonMigrationSourceClient * _migrationSourceClient;
}

@property (nonatomic, retain) BYBuddyDaemonMigrationSourceClient *migrationSourceClient;

- (void).cxx_destruct;
- (id)init;
- (void)launchSetupForMigration:(id)arg1;
- (id)migrationSourceClient;
- (void)setFileTransferSession:(id)arg1;
- (void)setMigrationSourceClient:(id)arg1;

@end
