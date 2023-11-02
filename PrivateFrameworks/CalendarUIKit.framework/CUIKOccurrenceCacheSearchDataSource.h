
@interface CUIKOccurrenceCacheSearchDataSource : CUIKOccurrenceCacheDataSource {
    EKSpotlightSearch * _distantFutureSearch;
    EKSpotlightSearch * _distantPastSearch;
    EKSpotlightSearch * _narrowSearch;
    NSMutableDictionary * _processingCachedDays;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _resultsLock;
    int  _searchSeed;
    NSString * _searchTerm;
    NSArray * _sortedDays;
    bool  _sortedDaysUpdated;
}

- (void).cxx_destruct;
- (id)_createCachedDays;
- (void)_runBlock:(id /* block */)arg1;
- (void)_runBlock:(id /* block */)arg1 withRandomDelayUpperbound:(unsigned int)arg2;
- (void)_updateCachedDaysScrollingToToday:(bool)arg1;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (void)stopSearching;
- (bool)supportsFakeTodaySection;
- (bool)supportsInvitations;

@end
