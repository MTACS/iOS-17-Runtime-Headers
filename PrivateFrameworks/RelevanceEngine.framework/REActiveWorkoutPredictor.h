
@interface REActiveWorkoutPredictor : REPredictor <REActiveWorkoutPredictorProperties> {
    float  _dailyAverageWorkouts;
    bool  _hasActiveWorkout;
    NSDate * _lastCompletedWorkoutDate;
    unsigned long long  _numberOfWorkoutsPerformedToday;
    HKQuery * _workoutObservationQuery;
    REUpNextTimer * _workoutQueryCoalesceTimer;
    int  _workoutStateNotifyToken;
}

@property (getter=isActiveWorkout, nonatomic, readonly) bool activeWorkout;
@property (nonatomic, readonly) bool currentlyHasActiveWorkout;
@property (nonatomic, readonly) float dailyAverageWorkouts;
@property bool hasActiveWorkout;
@property (retain) NSDate *lastCompletedWorkoutDate;
@property (nonatomic, readonly) NSDate *lastWorkoutDate;
@property (nonatomic, readonly) unsigned long long numberOfWorkoutsPerformedToday;

+ (id)supportedFeatures;
+ (double)updateInterval;

- (void).cxx_destruct;
- (void)_cancelMonitoringWorkoutIfNeeded;
- (id)_init;
- (void)_processWorkoutHistoryData:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_fetchWorkoutHistory;
- (void)_scheduleFetchWorkoutTimer;
- (void)_updateWorkoutState;
- (bool)currentlyHasActiveWorkout;
- (float)dailyAverageWorkouts;
- (void)dealloc;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (bool)hasActiveWorkout;
- (bool)isActiveWorkout;
- (id)lastCompletedWorkoutDate;
- (id)lastWorkoutDate;
- (unsigned long long)numberOfWorkoutsPerformedToday;
- (void)pause;
- (void)resume;
- (void)setHasActiveWorkout:(bool)arg1;
- (void)setLastCompletedWorkoutDate:(id)arg1;
- (void)update;

@end
