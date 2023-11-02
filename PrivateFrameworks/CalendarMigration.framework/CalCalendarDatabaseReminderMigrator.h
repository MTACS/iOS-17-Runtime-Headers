
@interface CalCalendarDatabaseReminderMigrator : NSObject <CalMigrator> {
    <CalReminderMigrationDefaultsProvider> * _defaultsProvider;
    <CalReminderKitProvider> * _reminderKitProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CalReminderMigrationDefaultsProvider> *defaultsProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CalReminderKitProvider> *reminderKitProvider;
@property (readonly) Class superclass;

+ (long long)_accountTypeForStore:(void*)arg1;
+ (id)_attemptAccountMigrationForStore:(void*)arg1 withContext:(id)arg2 accountType:(long long*)arg3;
+ (bool)_attemptMigrationForStore:(void*)arg1 withContext:(id)arg2;
+ (id)_colorStringForCalendar:(void*)arg1;
+ (id)_identifierForCalendar:(void*)arg1;
+ (id)_identifierForReminder:(void*)arg1;
+ (id)_identifierForStore:(void*)arg1;
+ (void)_migrateCalendarAsReminderList:(void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4;
+ (void)_migrateReminder:(void*)arg1 withContext:(id)arg2 listChangeItem:(id)arg3;
+ (void)_migrateReminderListsInStore:(void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4;
+ (void)_migrateRemindersInCalendar:(void*)arg1 withContext:(id)arg2 listChangeItem:(id)arg3;
+ (bool)_preCheckStoreForPossibleMigrationDisablingRemindersIfNeeded:(void*)arg1 withContext:(id)arg2 accountType:(long long*)arg3 identifier:(id*)arg4;
+ (void)_removeRemindersDataAfterSuccessfulMigrationFromDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 withContext:(id)arg2;
+ (void)_setWasMigratedAndClearSyncTokenInAllCalendarsForStore:(void*)arg1 withContext:(id)arg2;
+ (bool)_shouldMigrateCalendarAsReminderList:(void*)arg1;
+ (void)_visitCalendarForMigrationAsReminderList:(void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4;

- (void).cxx_destruct;
- (bool)_attemptMigrationForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 inCalendarDirectory:(id)arg2 withContext:(id)arg3;
- (bool)_attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
- (bool)_attemptMigrationWithHomeDirectory:(id)arg1;
- (bool)_performMigrationForCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 inCalendarDirectory:(id)arg2 withContext:(id)arg3;
- (void)_performPreMigrationTasksInCalendarDirectory:(id)arg1 withContext:(id)arg2;
- (bool)attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
- (bool)attemptMigrationWithHomeDirectory:(id)arg1;
- (id)defaultsProvider;
- (id)initWithReminderKitProvider:(id)arg1 defaultsProvider:(id)arg2;
- (id)reminderKitProvider;

@end
