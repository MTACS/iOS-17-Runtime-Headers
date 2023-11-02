
@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding> {
    NSMutableData * _associatedObjectUUIDs;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    NSDate * _startDate;
    long long  _swimmingStrokeStyle;
    double  _totalDistanceCyclingInMeters;
    double  _totalDistanceSwimmingInYards;
    double  _totalDistanceWalkingInMeters;
    double  _totalEnergyBurnedInKilocalories;
    double  _totalSwimmingStrokes;
    unsigned long long  _workoutActivityType;
    NSMutableArray * _workoutEvents;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
