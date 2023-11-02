
@interface CalMigrationToolReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider> {
    <CalCalendarMigrationDefaultsProvider> * _calendarDefaultsProvider;
    <CalMigrationController> * _calendarMigrationController;
    <CalReminderMigrationDefaultsProvider> * _reminderDefaultsProvider;
    CalMigrationToolOptions * _toolOptions;
}

@property (nonatomic, readonly) <CalCalendarMigrationDefaultsProvider> *calendarDefaultsProvider;
@property (nonatomic, readonly) <CalMigrationController> *calendarMigrationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool havePerformedReminderMigrationCleanup;
@property (nonatomic, readonly) <CalReminderMigrationDefaultsProvider> *reminderDefaultsProvider;
@property (nonatomic, readonly) bool shouldBackupBeforeMigration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CalMigrationToolOptions *toolOptions;

- (void).cxx_destruct;
- (id)calendarDefaultsProvider;
- (id)calendarMigrationController;
- (bool)havePerformedReminderMigrationCleanup;
- (id)initWithToolOptions:(id)arg1 reminderDefaultsProvider:(id)arg2 calendarDefaultsProvider:(id)arg3 calendarMigrationController:(id)arg4;
- (id)reminderDefaultsProvider;
- (void)setHavePerformedReminderMigrationCleanup:(bool)arg1;
- (bool)shouldBackupBeforeMigration;
- (id)toolOptions;

@end
