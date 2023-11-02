
@protocol CalReminderKitDatabaseMigrationContext <CalMigrationController>

@required

- (void)didEndMigrationWithSuccess:(bool)arg1;
- (bool)ensureAccountsExist:(NSArray *)arg1 error:(id*)arg2;
- (void)recordMigrationFailure:(CalMigrationFailure *)arg1;
- (REMStore *)reminderStore;
- (bool)shouldDeleteMigratedData;
- (void)willBeginMigration;

@end
