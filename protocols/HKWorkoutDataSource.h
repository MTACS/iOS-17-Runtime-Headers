
@protocol HKWorkoutDataSource <NSObject>

@required

- (NSUUID *)identifier;
- (void)workoutBuilderDidFinish;

@end
