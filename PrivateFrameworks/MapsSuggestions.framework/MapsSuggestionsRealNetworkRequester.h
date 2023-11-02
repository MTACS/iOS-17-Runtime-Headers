
@interface MapsSuggestionsRealNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)ETAFromWaypoint:(id)arg1 toWaypoint:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(id /* block */)arg5;
- (bool)canonicalLocalSearchPostalAddress:(id)arg1 completion:(id /* block */)arg2;
- (bool)composedWaypointForAddressString:(id)arg1 completion:(id /* block */)arg2;
- (bool)composedWaypointForCurrentLocation:(id)arg1 completion:(id /* block */)arg2;
- (bool)composedWaypointForLocation:(id)arg1 completion:(id /* block */)arg2;
- (bool)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 completion:(id /* block */)arg3;
- (bool)composedWaypointForMapItem:(id)arg1 completion:(id /* block */)arg2;
- (bool)forwardGeocodeAddressString:(id)arg1 completion:(id /* block */)arg2;
- (bool)forwardGeocodePostalAddress:(id)arg1 completion:(id /* block */)arg2;
- (id)initFromResourceDepot:(id)arg1;
- (bool)placeForMuid:(id)arg1 completion:(id /* block */)arg2;
- (bool)placeRefinementForAddress:(id)arg1 completion:(id /* block */)arg2;
- (bool)placeRefinementForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 completion:(id /* block */)arg3;
- (bool)resolveMapItemHandleData:(id)arg1 completion:(id /* block */)arg2;
- (bool)reverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (bool)reverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 shiftIfNeeded:(bool)arg2 completion:(id /* block */)arg3;
- (bool)routeForWaypoints:(id)arg1 currentLocation:(id)arg2 routeAttributes:(id)arg3 feedback:(id)arg4 completion:(id /* block */)arg5;
- (bool)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (bool)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(id /* block */)arg3;
- (bool)searchWithAirportCode:(id)arg1 terminal:(id)arg2 gate:(id)arg3 completion:(id /* block */)arg4;
- (id)uniqueName;

@end
