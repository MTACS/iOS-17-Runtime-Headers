
@protocol CalReminderMigrationDefaultsProvider <NSObject>

@required

- (bool)havePerformedReminderMigrationCleanup;
- (void)setHavePerformedReminderMigrationCleanup:(bool)arg1;
- (bool)shouldBackupBeforeMigration;

@end
