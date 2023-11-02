
@interface HDAutoPauseWorkoutEventCollector : HDWorkoutEventCollector <CMWorkoutManagerDelegate> {
    int  _catFlexingNotifyToken;
    CMWorkoutManager * _cmWorkoutManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fakeActivityDetection:(id)arg1 workoutActivity:(id)arg2;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (void)stop;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (void)workoutManager:(id)arg1 detectedChangeInWorkoutType:(id)arg2 withOverview:(id)arg3;
- (void)workoutManager:(id)arg1 didBeginWorkoutSessionWithWorkout:(id)arg2 withOverview:(id)arg3;
- (void)workoutManager:(id)arg1 didEndWorkoutSessionWithWorkout:(id)arg2 withOverview:(id)arg3;
- (void)workoutManager:(id)arg1 didFailWorkout:(id)arg2 withError:(id)arg3;
- (void)workoutManager:(id)arg1 didPauseWorkout:(id)arg2 withOverview:(id)arg3;
- (void)workoutManager:(id)arg1 didResumeWorkout:(id)arg2 withOverview:(id)arg3;
- (void)workoutManager:(id)arg1 didSetCurrentWorkoutType:(id)arg2 withOverview:(id)arg3;
- (void)workoutManager:(id)arg1 didStartWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 didStopWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 suggestedStopWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 willPauseWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 willResumeWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 workoutLocationEventUpdate:(id)arg2;

@end
