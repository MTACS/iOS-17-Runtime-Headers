
@interface CalCalendarDatabaseReminderMigrationContext : CalReminderMigrationContext <CalPrivacySafePathProvider> {
    NSMutableArray * _calendarsToClearSyncToken;
    NSMutableArray * _calendarsToDelete;
    NSMutableArray * _calendarsToDisableReminders;
    NSMutableArray * _storesToDelete;
    NSMutableArray * _storesToDisableReminders;
    NSMutableArray * _storesToSetWasMigrated;
}

@property (nonatomic, readonly) NSArray *calendarsToClearSyncToken;
@property (nonatomic, readonly) NSArray *calendarsToDelete;
@property (nonatomic, readonly) NSArray *calendarsToDisableReminders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *storesToDelete;
@property (nonatomic, readonly) NSArray *storesToDisableReminders;
@property (nonatomic, readonly) NSArray *storesToSetWasMigrated;
@property (readonly) Class superclass;

+ (id)reminderMigrationContextWithReminderKitProvider:(id)arg1;

- (void).cxx_destruct;
- (bool)_isCalendarOwnedByExistingStoreToDelete:(void*)arg1;
- (void)_removeCalendarsToDeleteInStore:(void*)arg1;
- (void)addCalendarToClearSyncToken:(void*)arg1;
- (void)addCalendarToDelete:(void*)arg1;
- (void)addCalendarToDisableReminders:(void*)arg1;
- (void)addStoreToDelete:(void*)arg1;
- (void)addStoreToDisableReminders:(void*)arg1;
- (void)addStoreToSetWasMigrated:(void*)arg1;
- (id)calendarsToClearSyncToken;
- (id)calendarsToDelete;
- (id)calendarsToDisableReminders;
- (id)privacySafePathForURLInCalendarDirectory:(id)arg1;
- (id)storesToDelete;
- (id)storesToDisableReminders;
- (id)storesToSetWasMigrated;

@end
