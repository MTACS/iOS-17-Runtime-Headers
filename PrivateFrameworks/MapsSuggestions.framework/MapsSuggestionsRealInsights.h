
@interface MapsSuggestionsRealInsights : NSObject <MapsSuggestionsInsights, MapsSuggestionsSignalPipelineUpdateProxy> {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSXPCConnection * _connection;
    MapsSuggestionsFwdGeocodingRelevanceScoreProvider * _fwdGeoCodingRoutineScoreProvider;
    <MapsSuggestionsInsightsUpdates> * _insightUpdatesDelegate;
    MapsSuggestionsPortrait * _portrait;
    MapsSuggestionsPortraitRelevanceScoreProvider * _portraitScoreProvider;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    MapsSuggestionsRelevanceScorer * _relevanceScorer;
    MapsSuggestionsRoutineRelevanceScoreProvider * _routineScoreProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MapsSuggestionsInsightsUpdates> *insightUpdatesDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)confidenceScoresForContacts:(id)arg1 addresses:(id)arg2;
- (id)confidenceScoresForMapItems:(id)arg1;
- (BOOL)currentTripWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (BOOL)futureTripsWithHandler:(id /* block */)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)insightUpdatesDelegate;
- (double)isTouristHere;
- (bool)isTransitUser;
- (bool)isTransitUserHere;
- (void)preload;
- (void)setInsightUpdatesDelegate:(id)arg1;
- (id)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (BOOL)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (id)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (BOOL)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (id)signalPackForHere;
- (BOOL)signalPackForHereWithHandler:(id /* block */)arg1;
- (void)signalPackUpdated:(id)arg1;
- (id)uniqueName;
- (bool)userHasAPaymentCard;
- (bool)userHasATransitCard;
- (bool)userHasAnExpressPaymentCard;
- (bool)userHasAnUpcomingTrip;
- (bool)userIsCurrentlyInATrip;

@end
