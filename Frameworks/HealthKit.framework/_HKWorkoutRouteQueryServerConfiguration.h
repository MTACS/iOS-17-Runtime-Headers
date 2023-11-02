
@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration {
    NSDateInterval * _dateInterval;
    HKWorkoutRoute * _workoutRoute;
    NSUUID * _workoutUUID;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, retain) HKWorkoutRoute *workoutRoute;
@property (nonatomic, copy) NSUUID *workoutUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setWorkoutRoute:(id)arg1;
- (void)setWorkoutUUID:(id)arg1;
- (id)workoutRoute;
- (id)workoutUUID;

@end
