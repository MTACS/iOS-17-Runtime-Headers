
@interface ACHMonthlyChallengeDataSource : NSObject {
    ACHActivitySummaryIterator * _activitySummaryIterator;
    ACHActivitySummaryUtility * _activitySummaryUtility;
    HDDatabaseTransactionContext * _databaseContext;
    HDProfile * _profile;
    ACHAwardsWorkoutClient * _workoutClient;
    ACHWorkoutUtility * _workoutUtility;
}

@property (nonatomic, retain) ACHActivitySummaryIterator *activitySummaryIterator;
@property (nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (nonatomic, copy) HDDatabaseTransactionContext *databaseContext;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, readonly) bool requiresError;
@property (nonatomic, retain) ACHAwardsWorkoutClient *workoutClient;
@property (nonatomic) ACHWorkoutUtility *workoutUtility;

- (void).cxx_destruct;
- (double)_dailyAverageValueForMonthlyChallengeWithDailyTargetValue:(double)arg1 andDateComponentInterval:(id)arg2;
- (void)_getCurrentAndLongestStreakForStreakType:(unsigned long long)arg1 duringDateComponentInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)_getNoErrorLongestAndCurrentStreakForStreakType:(unsigned long long)arg1 duringDateComponentInterval:(id)arg2 completion:(id /* block */)arg3;
- (id)_inclusiveDateIntervalFor:(id)arg1 andDateComponentInterval:(id)arg2;
- (double)_numberOfDaysWithQuantity:(id /* block */)arg1 overThreshold:(double)arg2 forDateComponentInterval:(id)arg3;
- (double)_numberOfDaysWithQuantity:(id /* block */)arg1 overThreshold:(double)arg2 forDateComponentInterval:(id)arg3 error:(id*)arg4;
- (id)activitySummaryIterator;
- (id)activitySummaryUtility;
- (double)caloriesDuringDateComponentInterval:(id)arg1;
- (double)caloriesDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (long long)currentStreakOfType:(unsigned long long)arg1 duringDateComponentInterval:(id)arg2;
- (long long)currentStreakOfType:(unsigned long long)arg1 duringDateComponentInterval:(id)arg2 error:(id*)arg3;
- (id)databaseContext;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (id)initWithActivitySummaryIterator:(id)arg1 workoutClient:(id)arg2;
- (id)initWithProfile:(id)arg1 activitySummaryUtility:(id)arg2 workoutUtility:(id)arg3;
- (long long)longestStreakOfType:(unsigned long long)arg1 duringDateComponentInterval:(id)arg2;
- (long long)longestStreakOfType:(unsigned long long)arg1 duringDateComponentInterval:(id)arg2 error:(id*)arg3;
- (double)moveTimeDuringDateComponentInterval:(id)arg1;
- (double)moveTimeDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (long long)numberOfCompletedWorkoutsOfType:(unsigned long long)arg1 andLocation:(unsigned long long)arg2 duringDateInterval:(id)arg3;
- (long long)numberOfCompletedWorkoutsOfType:(unsigned long long)arg1 andLocation:(unsigned long long)arg2 duringDateInterval:(id)arg3 error:(id*)arg4;
- (long long)numberOfDaysDoublingExerciseGoalDuringDateComponentInterval:(id)arg1;
- (long long)numberOfDaysDoublingExerciseGoalDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (double)numberOfDaysWithAppleMoveTimeOver:(double)arg1 forDateComponentInterval:(id)arg2 calendar:(id)arg3 error:(id*)arg4;
- (double)numberOfDaysWithCaloriesBurnedOver:(double)arg1 forDateComponentInterval:(id)arg2 calendar:(id)arg3 error:(id*)arg4;
- (double)numberOfDaysWithDistanceOver:(double)arg1 forDateComponentInterval:(id)arg2 calendar:(id)arg3 error:(id*)arg4;
- (double)numberOfDaysWithExerciseMinutesOver:(double)arg1 forDateComponentInterval:(id)arg2 calendar:(id)arg3 error:(id*)arg4;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1 error:(id*)arg2;
- (id)profile;
- (bool)requiresError;
- (void)setActivitySummaryIterator:(id)arg1;
- (void)setActivitySummaryUtility:(id)arg1;
- (void)setDatabaseContext:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setWorkoutClient:(id)arg1;
- (void)setWorkoutUtility:(id)arg1;
- (double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 calendar:(id)arg3 error:(id*)arg4;
- (double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1 error:(id*)arg2;
- (id)workoutClient;
- (id)workoutUtility;

@end
