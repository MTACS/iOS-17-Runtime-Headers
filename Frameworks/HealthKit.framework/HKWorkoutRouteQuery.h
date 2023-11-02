
@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface> {
    id /* block */  _dataHandler;
    NSDateInterval * _dateInterval;
    HKWorkoutRoute * _series;
    NSUUID * _workoutUUID;
}

@property (nonatomic, readonly) id /* block */ dataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(bool)arg2 query:(id)arg3;
- (id /* block */)dataHandler;
- (id)initWithActiveWorkoutUUID:(id)arg1 dataHandler:(id /* block */)arg2;
- (id)initWithRoute:(id)arg1 dataHandler:(id /* block */)arg2;
- (id)initWithRoute:(id)arg1 dateInterval:(id)arg2 dataHandler:(id /* block */)arg3;
- (id)initWithRoute:(id)arg1 workoutUUID:(id)arg2 dateInterval:(id)arg3 dataHandler:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
