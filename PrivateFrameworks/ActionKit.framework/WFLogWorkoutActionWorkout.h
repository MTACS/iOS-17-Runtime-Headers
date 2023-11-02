
@interface WFLogWorkoutActionWorkout : NSObject {
    HKUnit * _calorieUnit;
    HKQuantitySample * _caloriesSample;
    HKQuantitySample * _distanceSample;
    HKUnit * _distanceUnit;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, retain) HKUnit *calorieUnit;
@property (nonatomic, retain) HKQuantitySample *caloriesSample;
@property (nonatomic, retain) HKQuantitySample *distanceSample;
@property (nonatomic, retain) HKUnit *distanceUnit;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)calorieUnit;
- (id)caloriesSample;
- (id)distanceSample;
- (id)distanceUnit;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 caloriesSample:(id)arg3 calorieUnit:(id)arg4 distanceSample:(id)arg5 distanceUnit:(id)arg6;
- (void)setCalorieUnit:(id)arg1;
- (void)setCaloriesSample:(id)arg1;
- (void)setDistanceSample:(id)arg1;
- (void)setDistanceUnit:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
