
@interface CalDatabaseInMemoryChangeTracking : NSObject {
    int  _changeCount;
    struct { 
        unsigned long long timestamp; 
        unsigned int rowID; 
        unsigned int entityType : 8; 
        unsigned int clientID : 22; 
        unsigned int flags : 2; 
    }  _changes;
    unsigned long long  _lastPrunedTimestamp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _nextIndex;
}

+ (void)_setInterestedDatabasePaths:(id)arg1 forContext:(id)arg2;
+ (id)canonicalizePath:(id)arg1;
+ (id)changeTrackingForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
+ (id)changeTrackingForDatabaseWithPath:(id)arg1;
+ (id)pathForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
+ (void)setInterestedDatabasePaths:(id)arg1 forContext:(id)arg2;
+ (void)setInterestedDatabases:(id)arg1 forContext:(id)arg2;

- (int)_writeChanges:(id)arg1 withTimestamp:(unsigned long long)arg2 flags:(int)arg3 clientID:(unsigned int)arg4 atIndex:(int)arg5;
- (void)addChangeset:(struct __CFArray { }*)arg1 deletes:(struct __CFArray { }*)arg2 clientID:(unsigned int)arg3 onlySyncStatusChanged:(bool)arg4;
- (id)changedEntityIDsBetweenMinExternalTimestamp:(unsigned long long)arg1 minSelfTimestamp:(unsigned long long)arg2 maxExternalTimestamp:(unsigned long long)arg3 latestSelfTimestamp:(unsigned long long*)arg4 client:(int)arg5 changesAreSyncStatusOnly:(bool*)arg6 deleteOffset:(unsigned long long*)arg7;
- (id)changedEntityIDsBetweenTimestamp:(id)arg1 andTimestamp:(unsigned long long)arg2 latestTimestamp:(id*)arg3 client:(unsigned int)arg4 changesAreSyncStatusOnly:(bool*)arg5 deleteOffset:(unsigned long long*)arg6;
- (id)changedEntityIDsForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 sinceTimestamp:(id)arg2 latestTimestamp:(id*)arg3 changesAreSyncStatusOnly:(bool*)arg4 deleteOffset:(unsigned long long*)arg5;
- (void)clearAllChangesets;
- (id)init;

@end
