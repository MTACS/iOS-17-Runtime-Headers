
@interface CADSpotlightIndexer : NSObject {
    CalCancellationTokenSource * _cancellationTokenSource;
    CalDatabaseInitializationConfiguration * _databaseConfiguration;
    CalAccumulatingQueue * _incrementalUpdateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    <CADSpotlightIndexProvider> * _spotlightIndexProvider;
}

+ (struct __CFSet { }*)_entityTypesThatAffectSpotlightIndexing;
+ (id)_personaID:(void*)arg1;
+ (id)_spotlightDomainIDForItem:(void*)arg1 bundleID:(id)arg2 personaID:(id)arg3;
+ (id)spotlightDomainIDForItem:(void*)arg1 inDatabaseWithPersonaID:(id)arg2;
+ (id)spotlightDomainIDForItemInMainDatabase:(void*)arg1;

- (void).cxx_destruct;
- (bool)_deleteFromIndex:(id)arg1;
- (void)_enumerateDatabases:(id /* block */)arg1;
- (void)_fullReindex;
- (void)_fullReindexIfAllowedWithTransaction:(id)arg1;
- (void)_incrementalUpdate;
- (id)_mostRecentFailure;
- (bool)_mostRecentFailureWithinADayOfNow:(id)arg1;
- (bool)_pushBatchedUpdatesForCalendarItemsWithUUIDs:(id)arg1 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg2 personaID:(id)arg3;
- (bool)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg2 personaID:(id)arg3;
- (bool)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1 inBatchesOf:(unsigned long long)arg2 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg3 personaID:(id)arg4;
- (void)_resetDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
- (bool)_sendSpotlightUpdates:(id)arg1 deletes:(id)arg2 toIndex:(id)arg3;
- (id)_spotlightItemAttributes:(void*)arg1;
- (id)_textRepresentationForEvent:(void*)arg1;
- (bool)_upsertToIndex:(struct __CFArray { }*)arg1 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg2 personaID:(id)arg3;
- (void)_upsertsAndDeletesFromChanges:(id)arg1 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg2 personaID:(id)arg3 outUpserts:(id*)arg4 outDeletes:(id*)arg5;
- (void)cancelOngoingWorkAndShutdown;
- (void)checkForAndReportPastSpotlightMigrationErrorsAndReindexIfNeeded;
- (void)indexUnconsumedChanges;
- (id)init;
- (id)initWithDatabaseConfiguration:(id)arg1 spotlightIndexProvider:(id)arg2;
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)reindexAllItemsForBundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)reindexItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 acknowledgementHandler:(id /* block */)arg4;
- (void)waitUntilIdle;

@end
