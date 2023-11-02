
@protocol HKLiveWorkoutBuilderDelegate <NSObject>

@required

- (void)workoutBuilder:(HKLiveWorkoutBuilder *)arg1 didCollectDataOfTypes:(NSSet *)arg2;
- (void)workoutBuilderDidCollectEvent:(HKLiveWorkoutBuilder *)arg1;

@optional

- (void)workoutBuilder:(HKLiveWorkoutBuilder *)arg1 didBeginActivity:(HKWorkoutActivity *)arg2;
- (void)workoutBuilder:(HKLiveWorkoutBuilder *)arg1 didEndActivity:(HKWorkoutActivity *)arg2;

@end
