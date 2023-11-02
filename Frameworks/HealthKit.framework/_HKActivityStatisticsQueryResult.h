
@interface _HKActivityStatisticsQueryResult : NSObject <NSSecureCoding, _HKJSONObject> {
    NSArray * _activeEnergyResults;
    NSArray * _appleExerciseTimeResults;
    NSArray * _appleMoveTimeResults;
    NSArray * _appleStandHourResults;
    NSArray * _workoutResults;
}

@property (nonatomic, copy) NSArray *activeEnergyResults;
@property (nonatomic, copy) NSArray *appleExerciseTimeResults;
@property (nonatomic, copy) NSArray *appleMoveTimeResults;
@property (nonatomic, copy) NSArray *appleStandHourResults;
@property (nonatomic, copy) NSArray *workoutResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeEnergyResults;
- (id)appleExerciseTimeResults;
- (id)appleMoveTimeResults;
- (id)appleStandHourResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonObject;
- (void)setActiveEnergyResults:(id)arg1;
- (void)setAppleExerciseTimeResults:(id)arg1;
- (void)setAppleMoveTimeResults:(id)arg1;
- (void)setAppleStandHourResults:(id)arg1;
- (void)setWorkoutResults:(id)arg1;
- (id)workoutResults;

@end
