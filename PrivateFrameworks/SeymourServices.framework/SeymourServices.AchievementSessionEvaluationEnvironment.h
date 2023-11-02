
@interface SeymourServices.AchievementSessionEvaluationEnvironment : NSObject {
    void achievementDataStore;
    void bestEnergyBurnedOfWorkoutModality;
    void configurationDataStore;
    void currentWeeklyStreak;
    void energyBurnedAwardingCache;
    void isSessionCompletingPlan;
    void isSessionCompletingProgram;
    void isSessionGuided;
    void isSessionParticipatingInPlan;
    void longestWeeklyStreak;
    void modalityIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  modalityReference;
    void numberOfGuidedWorkoutsOver5MinutesForModality;
    void numberOfWorkoutsOver5Minutes;
    void numberOfWorkoutsOver5MinutesForModality;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  planCompletionDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  session;
    void sessionDuration;
    void sessionEnergyBurned;
    void workoutPlanDataStore;
}

@property (nonatomic) double bestEnergyBurnedOfWorkoutModality;
@property (nonatomic) long long currentWeeklyStreak;
@property (nonatomic) bool isSessionCompletingPlan;
@property (nonatomic) bool isSessionCompletingProgram;
@property (nonatomic) bool isSessionGuided;
@property (nonatomic) bool isSessionParticipatingInPlan;
@property (nonatomic) long long longestWeeklyStreak;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic) long long numberOfWorkoutsOver5Minutes;
@property (nonatomic) double sessionDuration;
@property (nonatomic) double sessionEnergyBurned;

- (void).cxx_destruct;
- (double)bestEnergyBurnedOfWorkoutModality;
- (long long)currentWeeklyStreak;
- (id)init;
- (bool)isSessionCompletingPlan;
- (bool)isSessionCompletingProgram;
- (bool)isSessionGuided;
- (bool)isSessionParticipatingInPlan;
- (long long)longestWeeklyStreak;
- (id)modalityIdentifier;
- (id)numberOfGuidedWorkoutsOver5MinutesForModality:(id)arg1;
- (long long)numberOfWorkoutsOver5Minutes;
- (id)numberOfWorkoutsOver5MinutesForModality:(id)arg1;
- (double)sessionDuration;
- (double)sessionEnergyBurned;
- (void)setBestEnergyBurnedOfWorkoutModality:(double)arg1;
- (void)setCurrentWeeklyStreak:(long long)arg1;
- (void)setIsSessionCompletingPlan:(bool)arg1;
- (void)setIsSessionCompletingProgram:(bool)arg1;
- (void)setIsSessionGuided:(bool)arg1;
- (void)setIsSessionParticipatingInPlan:(bool)arg1;
- (void)setLongestWeeklyStreak:(long long)arg1;
- (void)setModalityIdentifier:(id)arg1;
- (void)setNumberOfWorkoutsOver5Minutes:(long long)arg1;
- (void)setSessionDuration:(double)arg1;
- (void)setSessionEnergyBurned:(double)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
