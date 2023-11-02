
@interface HKRaceRouteLocationSeriesQuery : HKQuery <HKRaceRouteLocationSeriesQueryClientInterface> {
    NSUUID * _clusterUUID;
    id /* block */  _dataHandler;
    unsigned long long  _limit;
    NSMutableArray * _results;
    double  _timestampAnchor;
    unsigned long long  _workoutSelection;
    NSUUID * _workoutUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverRaceRouteLocations:(id)arg1 isFinal:(bool)arg2 query:(id)arg3;
- (id)initWithClusterUUID:(id)arg1 workoutSelection:(unsigned long long)arg2 timestampAnchor:(double)arg3 limit:(unsigned long long)arg4 dataHandler:(id /* block */)arg5;
- (id)initWithWorkoutUUID:(id)arg1 timestampAnchor:(double)arg2 limit:(unsigned long long)arg3 dataHandler:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
