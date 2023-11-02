
@interface HKWorkoutBuilderSampleQuery : HKQuery <HKWorkoutBuilderSampleQueryClientInterface> {
    bool  _needsHistoricalFetch;
    id /* block */  _quantitiesAddedHandler;
    id /* block */  _samplesAddedHandler;
    HKWorkoutBuilder * _workoutBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) HKWorkoutBuilder *workoutBuilder;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverQuantities:(id)arg1 hasFinishedHistoricalFetch:(bool)arg2 queryUUID:(id)arg3;
- (void)client_deliverSamples:(id)arg1 hasFinishedHistoricalFetch:(bool)arg2 queryUUID:(id)arg3;
- (id)initWithQuantityType:(id)arg1 workoutBuilder:(id)arg2 quantitiesAddedHandler:(id /* block */)arg3;
- (id)initWithSampleType:(id)arg1 workoutBuilder:(id)arg2 samplesAddedHandler:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setWorkoutBuilder:(id)arg1;
- (id)workoutBuilder;

@end
