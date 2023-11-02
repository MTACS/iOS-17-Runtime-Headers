
@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration {
    NSUUID * _associatedSessionUUID;
    HKDevice * _device;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    bool  _requiresRecovery;
    bool  _shouldCollectWorkoutEvents;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, copy) NSUUID *associatedSessionUUID;
@property (nonatomic, copy) HKDevice *device;
@property (nonatomic, copy) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (nonatomic) bool requiresRecovery;
@property (nonatomic) bool shouldCollectWorkoutEvents;
@property (nonatomic, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedSessionUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)goal;
- (unsigned long long)goalType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)requiresRecovery;
- (void)setAssociatedSessionUUID:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setRequiresRecovery:(bool)arg1;
- (void)setShouldCollectWorkoutEvents:(bool)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (bool)shouldCollectWorkoutEvents;
- (id)workoutConfiguration;

@end
