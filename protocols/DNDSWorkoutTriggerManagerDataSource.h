
@protocol DNDSWorkoutTriggerManagerDataSource <NSObject>

@required

- (DNDModeConfiguration *)createWorkoutModeForWorkoutTriggerManager:(DNDSWorkoutTriggerManager *)arg1;
- (void)setWorkoutTriggerEnabled:(bool)arg1 forWorkoutTriggerManager:(DNDSWorkoutTriggerManager *)arg2;
- (DNDModeConfiguration *)workoutModeForWorkoutTriggerManager:(DNDSWorkoutTriggerManager *)arg1;

@end
