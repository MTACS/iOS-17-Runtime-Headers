
@protocol CalCalendarMigrationDefaultsProvider <NSObject>

@required

- (void)clearLegacyDefaults;
- (NSString *)defaultCalendarUUID;
- (bool)isHolidayCalendarEnabled;
- (void)migrateLegacyDefaults;
- (bool)needsMigrationCleanupWithDestinationDirectory:(NSURL *)arg1;
- (void)recordMigrationDidBeginWithDestinationDirectory:(NSURL *)arg1;
- (void)recordMigrationDidEndWithReason:(unsigned long long)arg1;
- (void)setDefaultAllDayAlarmOffset:(NSNumber *)arg1;
- (void)setDefaultCalendarExternalIDOrUUID:(NSString *)arg1 name:(NSString *)arg2 storeID:(int)arg3;
- (void)setDefaultTimedAlarmOffset:(NSNumber *)arg1;
- (bool)shouldBackupBeforeMigration;
- (bool)shouldDeleteMigratedData;
- (bool)shouldPerformMigrationWithDestinationDirectory:(NSURL *)arg1;

@end
