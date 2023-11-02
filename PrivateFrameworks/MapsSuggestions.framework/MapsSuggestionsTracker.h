
@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {
    GEOAutomobileOptions * _automobileOptions;
    CLLocation * _currentLocation;
    MapsSuggestionsCanKicker * _currentLocationWiper;
    NSMutableDictionary * _distanceTitleFormatters;
    MapsSuggestionsDonater * _donater;
    NSMutableDictionary * _etaChargeTitleFormatters;
    MapsSuggestionsETARequester * _etaRequester;
    NSMutableDictionary * _etaTitleFormatters;
    MapsSuggestionsFlightUpdater * _flightUpdater;
    MapsSuggestionsManager * _manager;
    int  _mapType;
    <MapsSuggestionsNetworkRequester> * _networkRequester;
    MapsSuggestionsPredictor * _predictor;
    NSMutableDictionary * _previousETAs;
    NSObject<OS_dispatch_queue> * _queue;
    double  _refreshDeferTime;
    double  _refreshInterval;
    double  _refreshLeeway;
    <MapsSuggestionsTimer> * _refreshTimer;
    MapsSuggestionsETARequirements * _requirements;
    bool  _shouldBeRunning;
    MapsSuggestionsMutableWeakEntries * _trackedEntries;
    int  _transportType;
    id  _transportTypeChangedListener;
    MapsSuggestionsVirtualGarage * _virtualGarage;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType;
@property (nonatomic, retain) <MapsSuggestionsNetworkRequester> *networkRequester;
@property (nonatomic, retain) MapsSuggestionsPredictor *predictor;
@property (readonly) Class superclass;
@property (nonatomic, retain) MapsSuggestionsMutableWeakEntries *trackedEntries;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)automobileOptions;
- (void)clearLocationAndETAs;
- (id)currentLocation;
- (void)dealloc;
- (id)initWithManager:(id)arg1 requirements:(id)arg2 network:(id)arg3 flightUpdater:(id)arg4 virtualGarage:(id)arg5;
- (int)mapType;
- (id)networkRequester;
- (id)predictor;
- (void)rescheduleRefreshOnlyIfAlreadyRunning;
- (void)resetAllTitleFormatting;
- (void)scheduleRefresh;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setNetworkRequester:(id)arg1;
- (void)setPredictor:(id)arg1;
- (void)setTitleFormatter:(id)arg1 forType:(long long)arg2;
- (void)setTrackedEntries:(id)arg1;
- (void)trackSuggestionEntries:(id)arg1 transportType:(int)arg2;
- (id)trackedEntries;
- (id)uniqueName;
- (void)unschedule;

@end
