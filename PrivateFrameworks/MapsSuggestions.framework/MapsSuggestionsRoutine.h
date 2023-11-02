
@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject> {
    bool  _areFrequentLocationsAvailable;
    NSDate * _cacheTimeStamp;
    <MapsSuggestionsRoutineConnector> * _connector;
    NSMutableDictionary * _identifierToDatesMapping;
    GEOLocationShifter * _locationShifter;
    NSMutableDictionary * _loiLocationsForHome;
    NSMutableDictionary * _loiLocationsForSchool;
    NSMutableDictionary * _loiLocationsForWork;
    NSMutableDictionary * _loiVisits;
    MapsSuggestionsLimitedDictionary * _mapItemCache;
    MapsSuggestionsLimitedDictionary * _mapItemCacheOrigin;
    <MapsSuggestionsNetworkRequester> * _networkRequester;
    MapsSuggestionsObservers * _parkedCarObservers;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addParkedCarObserver:(id)arg1;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (unsigned long long)countHomeLOIs;
- (unsigned long long)countSchoolLOIs;
- (unsigned long long)countWorkLOIs;
- (BOOL)fetchEntriesForLocation:(id)arg1 period:(id)arg2 handler:(id /* block */)arg3;
- (BOOL)fetchLastVisitAtLocation:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)fetchLastVisitAtMapItem:(id)arg1 withinDistance:(double)arg2 handler:(id /* block */)arg3;
- (BOOL)fetchLocationsSinceDate:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)fetchMostRecentVisitWithinDistance:(double)arg1 ofMapItem:(id)arg2 handler:(id /* block */)arg3;
- (BOOL)fetchSuggestedShortcutsForType:(long long)arg1 minVisits:(unsigned long long)arg2 maxAge:(double)arg3 handler:(id /* block */)arg4;
- (void)forgetLocationOfInterest:(id)arg1 handler:(id /* block */)arg2;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithRoutineConnector:(id)arg1 networkRequester:(id)arg2;
- (BOOL)predictedExitTimeFromLocation:(id)arg1 date:(id)arg2 handler:(id /* block */)arg3;
- (BOOL)readMeCardWithMinVisits:(unsigned long long)arg1 maxAge:(double)arg2 handler:(id /* block */)arg3;
- (void)removeParkedCarObserver:(id)arg1;
- (void)removeParkedCarsAllowingFeature:(bool)arg1 handler:(id /* block */)arg2;
- (BOOL)touristBitForLocation:(id)arg1 handler:(id /* block */)arg2;
- (id)uniqueName;
- (void)updateFixedLOIs;

@end
