
@interface HDWorkoutBuilderPersistedConfiguration : NSObject <NSCopying> {
    NSUUID * _builderIdentifier;
    HDDeviceEntity * _deviceEntity;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    bool  _shouldCollectWorkoutEvents;
    HDSourceEntity * _sourceEntity;
    NSString * _sourceVersion;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, copy) NSUUID *builderIdentifier;
@property (nonatomic, retain) HDDeviceEntity *deviceEntity;
@property (nonatomic, copy) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (nonatomic) bool shouldCollectWorkoutEvents;
@property (nonatomic, retain) HDSourceEntity *sourceEntity;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic, copy) HKWorkoutConfiguration *workoutConfiguration;

- (void).cxx_destruct;
- (id)builderIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceEntity;
- (id)goal;
- (unsigned long long)goalType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setBuilderIdentifier:(id)arg1;
- (void)setDeviceEntity:(id)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setShouldCollectWorkoutEvents:(bool)arg1;
- (void)setSourceEntity:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (bool)shouldCollectWorkoutEvents;
- (id)sourceEntity;
- (id)sourceVersion;
- (id)workoutConfiguration;

@end
