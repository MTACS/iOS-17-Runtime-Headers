
@interface _HKHeartRateRecoveryQueryUtility : NSObject {
    id /* block */  _handler;
    HKHealthStore * _healthStore;
    HKQuantitySeriesSampleQuery * _heartRateQuery;
    NSArray * _heartRateReadings;
    HKWorkout * _workout;
    _HKSampleQueryUtility * _workoutQueryUtility;
}

+ (id)_recoveryEndDateWithStartDate:(id)arg1;
+ (id)perMinuteWorkoutRecoveryHeartRateFromReadings:(id)arg1 workoutEndDate:(id)arg2;
+ (id)predicateForWorkoutRecoveryTimeWithWorkout:(id)arg1;
+ (id)recoveryDateIntervalWithWorkout:(id)arg1;
+ (id)workoutRecoveryDateIntervalForWorkout:(id)arg1 overlappingWorkouts:(id)arg2;
+ (id)workoutRecoveryHeartRatesForWorkout:(id)arg1 recoveryDateInterval:(id)arg2 readings:(id)arg3;

- (void).cxx_destruct;
- (void)_heartRatesPostWorkout:(id)arg1 workoutRecoveryTimePredicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setupQueries;
- (void)dealloc;
- (void)execute;
- (id)initWithHealthStore:(id)arg1 workout:(id)arg2 handler:(id /* block */)arg3;
- (void)stop;

@end
