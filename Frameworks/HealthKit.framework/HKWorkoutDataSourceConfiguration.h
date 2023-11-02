
@interface HKWorkoutDataSourceConfiguration : HKTaskConfiguration {
    bool  _collectsDefaultTypes;
    NSSet * _eventTypesToCollect;
    NSDictionary * _filtersBySampleType;
    NSSet * _sampleTypesToCollect;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property bool collectsDefaultTypes;
@property (readonly, copy) NSSet *eventTypesToCollect;
@property (readonly, copy) NSDictionary *filtersBySampleType;
@property (readonly, copy) NSSet *sampleTypesToCollect;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)collectsDefaultTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTypesToCollect;
- (id)filtersBySampleType;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutConfiguration:(id)arg1 sampleTypesToCollect:(id)arg2 filters:(id)arg3 eventTypesToCollect:(id)arg4 collectsDefaultTypes:(bool)arg5;
- (id)sampleTypesToCollect;
- (void)setCollectsDefaultTypes:(bool)arg1;
- (id)workoutConfiguration;

@end
