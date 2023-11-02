
@protocol CalReminderKitProvider <NSObject>

@required

- (<CalReminderKitDatabaseMigrationContext> *)newDatabaseMigrationContext;
- (REMSaveRequest *)newSaveRequestWithStore:(REMStore *)arg1;
- (void)setDefaultReminderListIdentifier:(REMObjectID *)arg1;

@end
