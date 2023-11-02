
@interface HDCreateWorkoutOperation : HDJournalableOperation {
    NSArray * _activities;
    NSArray * _associatedSeries;
    HKWorkout * _createdWorkout;
    NSDateInterval * _dateInterval;
    HKDevice * _device;
    NSArray * _events;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    NSUUID * _identifier;
    NSDictionary * _metadata;
    NSArray * _quantityTypesIncludedWhilePaused;
    HKSource * _source;
    NSString * _sourceVersion;
    HDWorkoutBuilderStatisticsCalculators * _statisticsCalculators;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, readonly, copy) NSArray *activities;
@property (nonatomic, readonly, copy) NSArray *associatedSeries;
@property (nonatomic, readonly) HKWorkout *createdWorkout;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) HKDevice *device;
@property (nonatomic, readonly, copy) NSArray *events;
@property (nonatomic, readonly, copy) HKQuantity *goal;
@property (nonatomic, readonly) unsigned long long goalType;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSArray *quantityTypesIncludedWhilePaused;
@property (nonatomic, readonly, copy) HKSource *source;
@property (nonatomic, readonly, copy) NSString *sourceVersion;
@property (nonatomic, readonly) HDWorkoutBuilderStatisticsCalculators *statisticsCalculators;
@property (nonatomic, readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activities;
- (id)associatedSeries;
- (id)createdWorkout;
- (id)dateInterval;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)goal;
- (unsigned long long)goalType;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutConfiguration:(id)arg1 identifier:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 device:(id)arg5 source:(id)arg6 sourceVersion:(id)arg7 events:(id)arg8 activities:(id)arg9 statisticsCalculators:(id)arg10 associatedSeries:(id)arg11 goalType:(unsigned long long)arg12 goal:(id)arg13 quantityTypesIncludedWhilePaused:(id)arg14;
- (id)metadata;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)quantityTypesIncludedWhilePaused;
- (id)source;
- (id)sourceVersion;
- (id)statisticsCalculators;
- (id)workoutConfiguration;

@end
