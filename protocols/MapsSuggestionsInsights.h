
@protocol MapsSuggestionsInsights <MapsSuggestionsObject>

@required

+ (id)new;

- (NSArray *)confidenceScoresForContacts:(NSArray *)arg1 addresses:(NSArray *)arg2;
- (NSArray *)confidenceScoresForMapItems:(NSArray *)arg1;
- (BOOL)currentTripWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)futureTripsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (id)init;
- (id)initFromResourceDepot:(id <MapsSuggestionsResourceDepot>)arg1;
- (<MapsSuggestionsInsightsUpdates> *)insightUpdatesDelegate;
- (double)isTouristHere;
- (bool)isTransitUser;
- (bool)isTransitUserHere;
- (void)preload;
- (void)setInsightUpdatesDelegate:(id <MapsSuggestionsInsightsUpdates>)arg1;
- (MapsSuggestionsSignalPack *)signalPackForDestinationEntry:(MapsSuggestionsEntry *)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (BOOL)signalPackForDestinationEntry:(void *)arg1 originCoordinate:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: MapsSuggestionsEntry *, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MapsSuggestionsSignalPack *, NSError *, void*
- (MapsSuggestionsSignalPack *)signalPackForDestinationMapItem:(GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (BOOL)signalPackForDestinationMapItem:(void *)arg1 originCoordinate:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: GEOMapItemStorage *, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MapsSuggestionsSignalPack *, NSError *, void*
- (MapsSuggestionsSignalPack *)signalPackForHere;
- (BOOL)signalPackForHereWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MapsSuggestionsSignalPack *, NSError *, void*
- (bool)userHasAPaymentCard;
- (bool)userHasATransitCard;
- (bool)userHasAnExpressPaymentCard;
- (bool)userHasAnUpcomingTrip;
- (bool)userIsCurrentlyInATrip;

@end
