
@interface _HDCoreMotionAssertion : HDAssertion {
    NSArray * _activityConfigurations;
    CMWorkout * _cmWorkout;
    bool  _enableWorkoutChangeDetection;
    NSUUID * _sessionUUID;
    HKWorkoutConfiguration * _workoutConfiguration;
}

- (void).cxx_destruct;

@end
