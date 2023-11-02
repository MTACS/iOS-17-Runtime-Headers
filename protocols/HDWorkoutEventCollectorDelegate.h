
@protocol HDWorkoutEventCollectorDelegate

@required

- (void)receivedWorkoutEvent:(_HKWorkoutEvent *)arg1;
- (void)receivedWorkoutEvent:(_HKWorkoutEvent *)arg1 forWorkoutActivity:(HKWorkoutActivity *)arg2;

@end
