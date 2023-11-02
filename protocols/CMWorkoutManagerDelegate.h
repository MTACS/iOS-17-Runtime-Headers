
@protocol CMWorkoutManagerDelegate <NSObject>

@optional

- (void)workoutManager:(CMWorkoutManager *)arg1 detectedChangeInWorkoutType:(CMWorkout *)arg2 withOverview:(CMWorkoutOverview *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didBeginWorkoutSessionWithWorkout:(CMWorkout *)arg2 withOverview:(CMWorkoutOverview *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didEndWorkoutSessionWithWorkout:(CMWorkout *)arg2 withOverview:(CMWorkoutOverview *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didFailWorkout:(CMWorkout *)arg2 withError:(NSError *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didPauseWorkout:(CMWorkout *)arg2 withOverview:(CMWorkoutOverview *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didResumeWorkout:(CMWorkout *)arg2 withOverview:(CMWorkoutOverview *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didSetCurrentWorkoutType:(CMWorkout *)arg2 withOverview:(CMWorkoutOverview *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didStartWorkout:(CMWorkout *)arg2 atDate:(NSDate *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 didStopWorkout:(CMWorkout *)arg2 atDate:(NSDate *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 issuedPrediction:(CMWorkout *)arg2;
- (void)workoutManager:(CMWorkoutManager *)arg1 suggestedStopWorkout:(CMWorkout *)arg2 atDate:(NSDate *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 willPauseWorkout:(CMWorkout *)arg2 atDate:(NSDate *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 willResumeWorkout:(CMWorkout *)arg2 atDate:(NSDate *)arg3;
- (void)workoutManager:(CMWorkoutManager *)arg1 workoutLocationEventUpdate:(CMWorkout *)arg2;
- (void)workoutManagerDidFail:(CMWorkoutManager *)arg1 workout:(CMWorkout *)arg2 error:(NSError *)arg3;
- (void)workoutManagerDidStartWorkout:(CMWorkoutManager *)arg1 workout:(CMWorkout *)arg2 startDate:(NSDate *)arg3;
- (void)workoutManagerDidStopWorkout:(CMWorkoutManager *)arg1 workout:(CMWorkout *)arg2 stopDate:(NSDate *)arg3;
- (void)workoutManagerSuggestedStop:(CMWorkoutManager *)arg1 workout:(CMWorkout *)arg2 stopDate:(NSDate *)arg3;
- (void)workoutManagerWillPauseWorkout:(CMWorkoutManager *)arg1 workout:(CMWorkout *)arg2 pauseDate:(NSDate *)arg3;
- (void)workoutManagerWillResumeWorkout:(CMWorkoutManager *)arg1 workout:(CMWorkout *)arg2 resumeDate:(NSDate *)arg3;

@end
