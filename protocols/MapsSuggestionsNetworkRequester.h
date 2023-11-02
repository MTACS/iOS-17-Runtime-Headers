
@protocol MapsSuggestionsNetworkRequester <MapsSuggestionsObject>

@required

+ (id)new;

- (BOOL)ETAFromWaypoint:(void *)arg1 toWaypoint:(void *)arg2 transportType:(void *)arg3 automobileOptions:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: GEOComposedWaypoint *, GEOComposedWaypoint *, int, GEOAutomobileOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MapsSuggestionsTrafficAndETAResult *, NSError *, void*
- (BOOL)canonicalLocalSearchPostalAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)composedWaypointForAddressString:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (BOOL)composedWaypointForCurrentLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: GEOLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (BOOL)composedWaypointForLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: GEOLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (BOOL)composedWaypointForLocation:(void *)arg1 mapItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: GEOLocation *, <GEOMapItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (BOOL)composedWaypointForMapItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <GEOMapItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (BOOL)forwardGeocodeAddressString:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)forwardGeocodePostalAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (id)init;
- (id)initFromResourceDepot:(id <MapsSuggestionsResourceDepot>)arg1;
- (BOOL)placeForMuid:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: GEOMapItemIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)placeRefinementForAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)placeRefinementForCoordinate:(void *)arg1 address:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: struct { double x1; double x2; }, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)resolveMapItemHandleData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)reverseGeocodeCoordinate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: struct { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)reverseGeocodeCoordinate:(void *)arg1 shiftIfNeeded:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: struct { double x1; double x2; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)routeForWaypoints:(void *)arg1 currentLocation:(void *)arg2 routeAttributes:(void *)arg3 feedback:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: NSArray *, GEOLocation *, GEORouteAttributes *, GEODirectionsRequestFeedback *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODirectionsRequest *, GEODirectionsResponse *, NSError *, GEODirectionsError *, void*
- (BOOL)searchPOIWithName:(void *)arg1 ofPOICategory:(void *)arg2 withinVenue:(void *)arg3 maxResults:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, <GEOVenueIdentifier> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)searchString:(void *)arg1 maxResults:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)searchWithAirportCode:(void *)arg1 terminal:(void *)arg2 gate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
