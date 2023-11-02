
@protocol HKWorkoutSessionDelegate <NSObject>

@required

- (void)workoutSession:(HKWorkoutSession *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(NSDate *)arg4;
- (void)workoutSession:(HKWorkoutSession *)arg1 didFailWithError:(NSError *)arg2;

@optional

- (void)workoutSession:(HKWorkoutSession *)arg1 didBeginActivityWithConfiguration:(HKWorkoutConfiguration *)arg2 date:(NSDate *)arg3;
- (void)workoutSession:(HKWorkoutSession *)arg1 didDisconnectFromRemoteDeviceWithError:(NSError *)arg2;
- (void)workoutSession:(HKWorkoutSession *)arg1 didEndActivityWithConfiguration:(HKWorkoutConfiguration *)arg2 date:(NSDate *)arg3;
- (void)workoutSession:(HKWorkoutSession *)arg1 didGenerateEvent:(HKWorkoutEvent *)arg2;
- (void)workoutSession:(HKWorkoutSession *)arg1 didReceiveDataFromRemoteWorkoutSession:(NSArray *)arg2;

@end
