
@interface CUIKEventLoader : NSObject {
    bool  _allowEventLocationPrediction;
    int  _cancelSeed;
    unsigned long long  _componentForExpandingPadding;
    unsigned long long  _componentForExpandingRequests;
    int  _currentGeneration;
    double  _currentlyLoadingEnd;
    double  _currentlyLoadingStart;
    unsigned int  _daysOfPadding;
    <CUIKEventLoaderDelegate> * _delegate;
    double  _lastRequestedEnd;
    double  _lastRequestedStart;
    NSObject<OS_dispatch_group> * _loadGroup;
    NSObject<OS_dispatch_queue> * _loadQueue;
    double  _loadedEnd;
    NSArray * _loadedOccurrences;
    bool  _loadedOccurrencesAreStale;
    NSArray * _loadedProposedTimeOccurrences;
    double  _loadedStart;
    unsigned int  _maxDaysToCache;
    NSMutableSet * _occurrencesAwaitingDeletion;
    NSMutableSet * _occurrencesAwaitingRefresh;
    NSObject<OS_dispatch_queue> * _occurrencesLock;
    double  _preferredReloadEnd;
    double  _preferredReloadStart;
    NSSet * _selectedCalendars;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _selectedCalendarsLock;
    bool  _selectedCalendarsWereSet;
    EKEventStore * _store;
}

@property (nonatomic) bool allowEventLocationPrediction;
@property (nonatomic) <CUIKEventLoaderDelegate> *delegate;

- (void).cxx_destruct;
- (void)_enqueueLoadForRangeStart:(double)arg1 end:(double)arg2;
- (void)_eventStoreChanged:(id)arg1;
- (void)_getLoadStart:(double*)arg1 end:(double*)arg2 fromLoadedStart:(double)arg3 loadedEnd:(double)arg4 currentlyLoadingStart:(double)arg5 currentlyLoadingEnd:(double)arg6;
- (void)_getStart:(double)arg1 end:(double)arg2 expandedToComponents:(unsigned long long)arg3 withResultStart:(double*)arg4 resultEnd:(double*)arg5;
- (void)_getStart:(double)arg1 end:(double)arg2 paddedByDays:(int)arg3 inTimeZone:(id)arg4 resultStart:(double*)arg5 resultEnd:(double*)arg6;
- (void)_loadIfNeededBetweenStart:(double)arg1 end:(double)arg2 loadPaddingNow:(bool)arg3;
- (void)_pruneLoadedOccurrences;
- (void)_reload;
- (id)_uniqueEventsFromArray:(id)arg1;
- (void)_waitForBackgroundLoad;
- (void)_waitIfSimulatingSlowerLoads;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (bool)allowEventLocationPrediction;
- (void)cancelAllLoads;
- (id)delegate;
- (bool)firstLoadBegan;
- (id)initWithEventStore:(id)arg1;
- (void)loadIfNeeded;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4 isComplete:(bool*)arg5;
- (void)setAllowEventLocationPrediction:(bool)arg1;
- (void)setCacheLimit:(unsigned int)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPadding:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (bool)setSelectedCalendars:(id)arg1;
- (void)timeZoneChanged;

@end
