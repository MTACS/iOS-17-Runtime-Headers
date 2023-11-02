
@protocol HKWorkoutSessionPrivateDelegate <HKWorkoutSessionDelegate>

@required

- (void)workoutSession:(HKWorkoutSession *)arg1 didUpdateWorkoutConfiguration:(HKWorkoutConfiguration *)arg2;

@optional

- (void)workoutSession:(HKWorkoutSession *)arg1 didEnableAutomaticDetectionForActivityConfigurations:(NSArray *)arg2;
- (void)workoutSession:(HKWorkoutSession *)arg1 didSuggestWorkoutConfiguration:(HKWorkoutConfiguration *)arg2 date:(NSDate *)arg3;

@end
