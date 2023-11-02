
@interface HKLiveWorkoutBuilder : HKWorkoutBuilder {
    NSArray * _additionalDataSources;
    HKLiveWorkoutDataSource * _dataSource;
    <HKLiveWorkoutBuilderDelegate> * _delegate;
    HKWorkoutSession * _workoutSession;
}

@property (retain) NSArray *additionalDataSources;
@property (readonly, copy) HKWorkoutActivity *currentWorkoutActivity;
@property (retain) HKLiveWorkoutDataSource *dataSource;
@property <HKLiveWorkoutBuilderDelegate> *delegate;
@property (readonly) double elapsedTime;
@property bool shouldCollectWorkoutEvents;
@property (readonly) HKWorkoutSession *workoutSession;

- (void).cxx_destruct;
- (id)_privateDelegate;
- (void)_resourceQueue_updateElapsedTimeCache;
- (void)_resourceQueue_updateEvents:(id)arg1;
- (id)additionalDataSources;
- (void)clientRemote_didBeginActivity:(id)arg1;
- (void)clientRemote_didEndActivity:(id)arg1;
- (void)clientRemote_didUpdateMetadata:(id)arg1;
- (void)clientRemote_didUpdateStatistics:(id)arg1;
- (void)connectionInterrupted;
- (id)currentWorkoutActivity;
- (id)dataSource;
- (id)delegate;
- (double)elapsedTime;
- (id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 device:(id)arg3;
- (id)initWithHealthStore:(id)arg1 session:(id)arg2 builderConfiguration:(id)arg3 builderIdentifier:(id)arg4;
- (void)setAdditionalDataSources:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldCollectWorkoutEvents:(bool)arg1;
- (bool)shouldCollectWorkoutEvents;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (id)workoutSession;

@end
