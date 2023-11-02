
@interface CalMigrationToolOptions : NSObject {
    NSURL * _accountsChangesFile;
    NSURL * _accountsDatabaseFile;
    long long  _backupBeforeCalendarMigration;
    long long  _backupBeforeReminderMigration;
    long long  _deleteMigratedData;
    NSURL * _destinationDirectory;
    NSURL * _homeDirectory;
    bool  _migrateUsingCalendarDaemon;
    long long  _performCalendarMigration;
    long long  _performCleanup;
    long long  _performReminderMigration;
    NSURL * _sourceCalendarDirectory;
    bool  _waitForRemindersOnly;
}

@property (nonatomic, readonly) NSURL *accountsChangesFile;
@property (nonatomic, readonly) NSURL *accountsDatabaseFile;
@property (nonatomic, readonly) long long backupBeforeCalendarMigration;
@property (nonatomic, readonly) long long backupBeforeReminderMigration;
@property (nonatomic, readonly) long long deleteMigratedData;
@property (nonatomic, readonly) NSURL *destinationDirectory;
@property (nonatomic, readonly) NSURL *homeDirectory;
@property (nonatomic, readonly) bool migrateUsingCalendarDaemon;
@property (nonatomic, readonly) long long performCalendarMigration;
@property (nonatomic, readonly) long long performCleanup;
@property (nonatomic, readonly) long long performReminderMigration;
@property (nonatomic, readonly) NSURL *sourceCalendarDirectory;
@property (nonatomic, readonly) bool waitForRemindersOnly;

+ (id)_stringForTriStateOption:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithHomeDirectory:(id)arg1 sourceCalendarDirectory:(id)arg2 destinationDirectory:(id)arg3 migrateUsingCalendarDaemon:(bool)arg4 waitForRemindersOnly:(bool)arg5 performCalendarMigration:(long long)arg6 performReminderMigration:(long long)arg7 performCleanup:(long long)arg8 deleteMigratedData:(long long)arg9 backupBeforeCalendarMigration:(long long)arg10 backupBeforeReminderMigration:(long long)arg11 saveAccountsChangesToFile:(id)arg12 accountsDatabaseFile:(id)arg13;
- (id)accountsChangesFile;
- (id)accountsDatabaseFile;
- (long long)backupBeforeCalendarMigration;
- (long long)backupBeforeReminderMigration;
- (long long)deleteMigratedData;
- (id)description;
- (id)destinationDirectory;
- (id)homeDirectory;
- (id)initUsingCalendarDaemon;
- (id)initUsingCalendarDaemonWaitingForRemindersOnly;
- (id)initWithHomeDirectory:(id)arg1;
- (id)initWithHomeDirectory:(id)arg1 destinationDirectory:(id)arg2 performCalendarMigration:(long long)arg3 performReminderMigration:(long long)arg4 performCleanup:(long long)arg5 deleteMigratedData:(long long)arg6 backupBeforeCalendarMigration:(long long)arg7 backupBeforeReminderMigration:(long long)arg8 saveAccountsChangesToFile:(id)arg9 accountsDatabaseFile:(id)arg10;
- (id)initWithSourceCalendarDirectory:(id)arg1 destinationDirectory:(id)arg2 performCalendarMigration:(long long)arg3 performReminderMigration:(long long)arg4 performCleanup:(long long)arg5 deleteMigratedData:(long long)arg6 backupBeforeCalendarMigration:(long long)arg7 backupBeforeReminderMigration:(long long)arg8 saveAccountsChangesToFile:(id)arg9 accountsDatabaseFile:(id)arg10;
- (bool)migrateUsingCalendarDaemon;
- (long long)performCalendarMigration;
- (long long)performCleanup;
- (long long)performReminderMigration;
- (id)sourceCalendarDirectory;
- (bool)waitForRemindersOnly;

@end
