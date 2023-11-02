
@interface WorkoutCore.MultiSportWorkoutConfiguration : WorkoutCore.WorkoutConfiguration {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _subConfigs;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _title;
    void overrideDeviceCapability;
}

@property (nonatomic, readonly) NSString *analyticsSubActivities;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)analyticsSubActivities;
- (long long)hash;

@end
