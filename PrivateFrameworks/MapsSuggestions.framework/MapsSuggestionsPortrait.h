
@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject> {
    NSString * _cachedKey;
    GEOMapItemStorage * _cachedMapItem;
    NSNumber * _cachedMapItemOrigin;
    <MapsSuggestionsPortraitConnector> * _connector;
    MapsSuggestionsContacts * _contacts;
    PPConnectionsCriteria * _criteria;
    NSArray * _currentTrips;
    NSArray * _futureTrips;
    <MapsSuggestionsNetworkRequester> * _networkRequester;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (bool)currentTripsWithHandler:(id /* block */)arg1;
- (bool)fetchConnectionEntriesWithHandler:(id /* block */)arg1;
- (bool)fetchLocationEntriesForTray:(bool)arg1 currentLocation:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (id)fetchNamedEntitiesFromDate:(id)arg1;
- (bool)futureTripsWithHandler:(id /* block */)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithPortraitConnector:(id)arg1 networkRequester:(id)arg2 contacts:(id)arg3;
- (void)sendFeedbackforClientID:(id)arg1 storeType:(long long)arg2 explicitlyEngagedStrings:(id)arg3 explicitlyRejectedStrings:(id)arg4 implicitlyEngagedStrings:(id)arg5 implicitlyRejectedStrings:(id)arg6;
- (id)uniqueName;

@end
