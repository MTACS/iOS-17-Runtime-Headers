
@interface WFHKWorkoutContainer : NSObject <NSSecureCoding, WFNaming> {
    HKUnit * _caloriesUnit;
    HKUnit * _distanceUnit;
    HKWorkout * _workout;
}

@property (nonatomic, retain) HKUnit *caloriesUnit;
@property (nonatomic, readonly) double caloriesValue;
@property (nonatomic, retain) HKUnit *distanceUnit;
@property (nonatomic, readonly) double distanceValue;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, retain) HKWorkout *workout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caloriesUnit;
- (double)caloriesValue;
- (id)distanceUnit;
- (double)distanceValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkout:(id)arg1;
- (id)initWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3;
- (void)setCaloriesUnit:(id)arg1;
- (void)setDistanceUnit:(id)arg1;
- (void)setWorkout:(id)arg1;
- (id)wfName;
- (id)workout;

@end
