
@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool havePerformedReminderMigrationCleanup;
@property (nonatomic, readonly) bool shouldBackupBeforeMigration;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)havePerformedReminderMigrationCleanup;
- (void)setHavePerformedReminderMigrationCleanup:(bool)arg1;
- (bool)shouldBackupBeforeMigration;

@end
