
@protocol HDCurrentWorkoutObserver <NSObject>

@required

- (void)workoutManager:(HDWorkoutManager *)arg1 didUpdateCurrentWorkout:(HDWorkoutSessionServer *)arg2;

@optional

- (void)workoutManager:(HDWorkoutManager *)arg1 currentWorkout:(HDWorkoutSessionServer *)arg2 didChangeToState:(long long)arg3;
- (void)workoutManager:(HDWorkoutManager *)arg1 currentWorkout:(HDWorkoutSessionServer *)arg2 didUpdateDataAccumulator:(id <HDWorkoutDataAccumulator>)arg3;

@end
