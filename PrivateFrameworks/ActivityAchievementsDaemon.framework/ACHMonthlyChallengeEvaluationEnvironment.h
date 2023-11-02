
@interface ACHMonthlyChallengeEvaluationEnvironment : NSObject {
    NSCalendar * _calendar;
    ACHMonthlyChallengeDataSource * _dataSource;
    ACHDateComponentInterval * _dateComponentInterval;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, readonly) double currentMoveStreakInCurrentMonth;
@property (nonatomic) ACHMonthlyChallengeDataSource *dataSource;
@property (nonatomic, retain) ACHDateComponentInterval *dateComponentInterval;
@property (nonatomic, readonly) double longestMoveStreakInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysClosingAllThreeRingsInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysClosingExerciseRingInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysClosingMoveRingInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysClosingStandRingInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysDoublingExerciseGoalInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysDoublingMoveGoalInCurrentMonth;
@property (nonatomic, readonly) double numberOfWorkoutsCompletedInCurrentMonth;
@property (nonatomic, readonly) double totalEnergyBurnInCurrentMonth;
@property (nonatomic, readonly) double totalExerciseMinutesInCurrentMonth;
@property (nonatomic, readonly) double totalMoveTimeInCurrentMonth;
@property (nonatomic, readonly) double totalWalkingRunningDistanceInCurrentMonth;

- (void).cxx_destruct;
- (double)_valueForMonthlyChallengeType:(unsigned long long)arg1;
- (id)calendar;
- (double)currentMoveStreakInCurrentMonth;
- (id)dataSource;
- (id)dateComponentInterval;
- (id)eligibleSpecificWorkoutChallengeType;
- (id)initWithMonthlyChallengeDataSource:(id)arg1 dateComponentInterval:(id)arg2 calendar:(id)arg3;
- (double)longestMoveStreakInCurrentMonth;
- (id)numberOfCompletedWorkoutsInCurrentMonthForChallengeType:(id)arg1;
- (double)numberOfDaysClosingAllThreeRingsInCurrentMonth;
- (double)numberOfDaysClosingExerciseRingInCurrentMonth;
- (double)numberOfDaysClosingMoveRingInCurrentMonth;
- (double)numberOfDaysClosingStandRingInCurrentMonth;
- (double)numberOfDaysDoublingExerciseGoalInCurrentMonth;
- (double)numberOfDaysDoublingMoveGoalInCurrentMonth;
- (id)numberOfDaysWithAppleMoveTimeOver:(id)arg1;
- (id)numberOfDaysWithCaloriesBurnedOver:(id)arg1;
- (id)numberOfDaysWithDistanceOver:(id)arg1;
- (id)numberOfDaysWithExerciseMinutesOver:(id)arg1;
- (double)numberOfWorkoutsCompletedInCurrentMonth;
- (void)setCalendar:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDateComponentInterval:(id)arg1;
- (double)totalEnergyBurnInCurrentMonth;
- (double)totalExerciseMinutesInCurrentMonth;
- (double)totalMoveTimeInCurrentMonth;
- (double)totalWalkingRunningDistanceInCurrentMonth;
- (id)valueForUndefinedKey:(id)arg1;

@end
