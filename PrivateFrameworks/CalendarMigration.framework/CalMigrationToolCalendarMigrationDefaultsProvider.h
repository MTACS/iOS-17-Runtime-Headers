
@interface CalMigrationToolCalendarMigrationDefaultsProvider : NSObject <CalCalendarMigrationDefaultsProvider> {
    <CalCalendarMigrationDefaultsProvider> * _defaultProvider;
    CalMigrationToolOptions * _toolOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultCalendarUUID;
@property (nonatomic, readonly) <CalCalendarMigrationDefaultsProvider> *defaultProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHolidayCalendarEnabled;
@property (nonatomic, readonly) bool shouldBackupBeforeMigration;
@property (nonatomic, readonly) bool shouldDeleteMigratedData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CalMigrationToolOptions *toolOptions;

- (void).cxx_destruct;
- (void)clearLegacyDefaults;
- (id)defaultCalendarUUID;
- (id)defaultProvider;
- (id)initWithToolOptions:(id)arg1 defaultProvider:(id)arg2;
- (bool)isHolidayCalendarEnabled;
- (void)migrateLegacyDefaults;
- (bool)needsMigrationCleanupWithDestinationDirectory:(id)arg1;
- (void)recordMigrationDidBeginWithDestinationDirectory:(id)arg1;
- (void)recordMigrationDidEndWithReason:(unsigned long long)arg1;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;
- (void)setDefaultCalendarExternalIDOrUUID:(id)arg1 name:(id)arg2 storeID:(int)arg3;
- (void)setDefaultTimedAlarmOffset:(id)arg1;
- (bool)shouldBackupBeforeMigration;
- (bool)shouldDeleteMigratedData;
- (bool)shouldPerformMigrationWithDestinationDirectory:(id)arg1;
- (id)toolOptions;

@end
