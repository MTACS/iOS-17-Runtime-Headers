
@interface GetAcitivitySummaryIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic, copy) NSMeasurement *activeEnergyBurned;
@property (nonatomic, copy) NSMeasurement *activeEnergyBurnedGoal;
@property (nonatomic, copy) NSString *activeEnergyBurnedUnit;
@property (nonatomic) double appleExerciseTime;
@property (nonatomic) double appleExerciseTimeGoal;
@property (nonatomic) double appleMoveTime;
@property (nonatomic) double appleMoveTimeGoal;
@property (nonatomic) double appleStandHours;
@property (nonatomic) double appleStandHoursGoal;
@property (nonatomic) long long code;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
