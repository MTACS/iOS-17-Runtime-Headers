
@interface CUIKOccurrenceCacheDataSource : NSObject <CUIKOccurrenceCacheDataSourceProtocol> {
    NSMutableArray * _cachedDays;
    int  _cachedDaysSeed;
    NSSet * _calendars;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    EKEventStore * _eventStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedDays;
- (id)_cachedOccurrenceAtIndexPath:(id)arg1;
- (id)_createCachedDays;
- (void)_fetchDaysStartingFromSection:(long long)arg1 sectionsToLoadInBothDirections:(long long)arg2 background:(bool)arg3 includeGivenSection:(bool)arg4;
- (id)_mutableDayDictionaryAtIndex:(unsigned long long)arg1;
- (long long)cachedDayCount;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (bool)cachedOccurrencesAreLoaded;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (id)dateAtDayIndex:(long long)arg1;
- (id)faultOccurrencesForDay:(id)arg1 inOccurrencesArray:(id)arg2 index:(long long)arg3 limit:(long long*)arg4 cacheSeed:(int)arg5;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
- (void)fetchDaysStartingFromSection:(long long)arg1 sectionsToLoadInBothDirections:(long long)arg2;
- (id)indexPathsForOccurrence:(id)arg1;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (void)setCachedDays:(id)arg1;
- (void)stopSearching;
- (bool)supportsFakeTodaySection;
- (bool)supportsInvitations;

@end
