
@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject> {
    GEOAutomobileOptions * _automobileOptions;
    CLLocation * _currentLocationUsed;
    GEOComposedWaypoint * _currentLocationWaypoint;
    MapsSuggestionsETARequirements * _etaRequirements;
    int  _forcedTransportMode;
    int  _mapType;
    <MapsSuggestionsNetworkRequester> * _networkRequester;
    NSObject<OS_dispatch_queue> * _queue;
    <MapsSuggestionsPredictor> * _transportModePredictor;
    NSMutableDictionary * _waypoints;
    NSLock * _waypointsLock;
}

@property (retain) GEOAutomobileOptions *automobileOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int mapType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (bool)ETAsFromLocation:(id)arg1 toEntries:(id)arg2 completion:(id /* block */)arg3;
- (id)automobileOptions;
- (void)forceTransportType:(int)arg1;
- (id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3;
- (int)mapType;
- (id)networkRequester;
- (void)setAutomobileOptions:(id)arg1;
- (void)setMapType:(int)arg1;
- (bool)transportTypeFromLocation:(id)arg1 toEntry:(id)arg2 completion:(id /* block */)arg3;
- (id)uniqueName;

@end
