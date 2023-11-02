
@interface SeymourServices.AchievementProgressEvaluationEnvironment : NSObject {
    void achievementDataStore;
    void bestEnergyBurnedOfWorkoutModality;
    void catalogDataStore;
    void configurationDataStore;
    void currentPlanCompletedNumberOfWorkouts;
    void currentPlanTotalNumberOfWorkouts;
    void currentWeeklyStreak;
    void isSessionCompletingProgram;
    void isSessionGuided;
    void longestWeeklyStreak;
    void modalityIdentifier;
    void numberOfGuidedWorkoutsOver5MinutesForModalities;
    void numberOfWorkoutsOver5Minutes;
    void numberOfWorkoutsOver5MinutesForModalities;
    void sessionDuration;
    void sessionEnergyBurned;
    void workoutPlanDataStore;
}

@property (nonatomic) double bestEnergyBurnedOfWorkoutModality;
@property (nonatomic) long long currentPlanCompletedNumberOfWorkouts;
@property (nonatomic) long long currentPlanTotalNumberOfWorkouts;
@property (nonatomic) long long currentWeeklyStreak;
@property (nonatomic) bool isSessionCompletingProgram;
@property (nonatomic) bool isSessionGuided;
@property (nonatomic) long long longestWeeklyStreak;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic) long long numberOfWorkoutsOver5Minutes;
@property (nonatomic) double sessionDuration;
@property (nonatomic) double sessionEnergyBurned;

- (void).cxx_destruct;
- (double)bestEnergyBurnedOfWorkoutModality;
- (long long)currentPlanCompletedNumberOfWorkouts;
- (long long)currentPlanTotalNumberOfWorkouts;
- (long long)currentWeeklyStreak;
- (id)init;
- (bool)isSessionCompletingProgram;
- (bool)isSessionGuided;
- (long long)longestWeeklyStreak;
- (id)modalityIdentifier;
- (id)numberOfGuidedWorkoutsOver5MinutesForModality:(id)arg1;
- (long long)numberOfWorkoutsOver5Minutes;
- (id)numberOfWorkoutsOver5MinutesForModality:(id)arg1;
- (double)sessionDuration;
- (double)sessionEnergyBurned;
- (void)setBestEnergyBurnedOfWorkoutModality:(double)arg1;
- (void)setCurrentPlanCompletedNumberOfWorkouts:(long long)arg1;
- (void)setCurrentPlanTotalNumberOfWorkouts:(long long)arg1;
- (void)setCurrentWeeklyStreak:(long long)arg1;
- (void)setIsSessionCompletingProgram:(bool)arg1;
- (void)setIsSessionGuided:(bool)arg1;
- (void)setLongestWeeklyStreak:(long long)arg1;
- (void)setModalityIdentifier:(id)arg1;
- (void)setNumberOfWorkoutsOver5Minutes:(long long)arg1;
- (void)setSessionDuration:(double)arg1;
- (void)setSessionEnergyBurned:(double)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
