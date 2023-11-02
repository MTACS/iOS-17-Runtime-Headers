
@interface CalSearch : NSObject {
    <CalSearchDataSink> * _dataSink;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _dataSourceDeallocLock;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; } * _database;
    bool  _dateToStartShowingResultsSentToDataSink;
    struct CalFilter { } * _filter;
    bool  _implementsCancellationCallback;
    struct __CFSet { } * _matchedEventsSet;
    struct __CFSet { } * _matchedLocationsSet;
    struct __CFSet { } * _matchedParticipantsSet;
    bool  _moreResultsAvailable;
    struct __CFArray { } * _partialCachedDays;
    struct __CFArray { } * _partialCachedDaysIndexes;
    struct __CFArray { } * _partialCachedOccurrences;
    struct __CFArray { } * _partialResults;
    bool  _searchAttendees;
    bool  _searchLocations;
    bool  _searchParticipants;
    struct __CFString { } * _searchString;
    int  _seed;
    bool  _shouldMatchLocationsOnlyForEventSearch;
    bool  _stopLoadingResults;
}

@property bool searchAttendees;
@property bool searchLocations;
@property bool searchParticipants;
@property bool shouldMatchLocationsOnlyForEventSearch;

- (void).cxx_destruct;
- (void)_addMatchedEventIds:(struct __CFArray { }*)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray { }*)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray { }*)arg1;
- (struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)_createEventIdsSearchContext;
- (struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)_createLocationIdsSearchContext;
- (struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)_createParticipantIdsSearchContext;
- (struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool *x5; bool *x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; bool x16; struct __CFString {} *x17; double x18; bool x19; double x20; }*)_createSearchContext;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool *x5; bool *x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; bool x16; struct __CFString {} *x17; double x18; bool x19; double x20; }*)arg1;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool *x5; bool *x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; bool x16; struct __CFString {} *x17; double x18; bool x19; double x20; }*)arg1;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_startLoadingResults;
- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 filter:(struct CalFilter { }*)arg2 dataSink:(id)arg3;
- (bool)moreResultsAvailable;
- (bool)searchAttendees;
- (bool)searchLocations;
- (bool)searchParticipants;
- (int)seed;
- (void)setSearchAttendees:(bool)arg1;
- (void)setSearchLocations:(bool)arg1;
- (void)setSearchParticipants:(bool)arg1;
- (void)setShouldMatchLocationsOnlyForEventSearch:(bool)arg1;
- (bool)shouldMatchLocationsOnlyForEventSearch;
- (void)startSearching;
- (void)stopSearching;

@end
