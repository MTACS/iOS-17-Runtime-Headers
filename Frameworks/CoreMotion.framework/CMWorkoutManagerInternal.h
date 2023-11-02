
@interface CMWorkoutManagerInternal : NSObject {
    <CMWorkoutManagerDelegate> * fDelegate;
    bool  fEnableWorkoutChangeDetection;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    CMWorkout * fLastNonTransitionWorkout;
    void * fLocationdConnection;
    CMWorkoutManager * fSender;
    long long  fSessionState;
    CMWorkout * fWorkout;
    CMWorkoutOverview * fWorkoutOverview;
}

- (void)_beginWorkoutSession:(id)arg1 withWorkout:(id)arg2 enableWorkoutChangeDetection:(bool)arg3;
- (void)_checkWorkout:(id)arg1;
- (void)_endWorkoutSession:(id)arg1;
- (void)_getPromptsNeededForWorkoutType:(long long)arg1 handler:(id /* block */)arg2;
- (void)_handleDaemonEvent:(id)arg1;
- (void)_handleDaemonResponse:(id)arg1;
- (void)_pauseWorkout:(id)arg1;
- (void)_registerForWorkoutEvents;
- (void)_resumeWorkout:(id)arg1;
- (void)_setCurrentWorkoutType:(id)arg1 isManualTransition:(bool)arg2;
- (void)_setMode:(unsigned long long)arg1 forWorkout:(id)arg2;
- (void)_setSuggestedStopTimeout:(double)arg1;
- (void)_setWorkout:(id)arg1;
- (bool)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)arg1;
- (void)_startWorkout:(id)arg1;
- (void)_stopWorkout:(id)arg1;
- (void)_teardown;
- (void)_triggerWorkoutLocationUpdateForTesting:(long long)arg1;
- (void)_unregisterForWorkoutEvents;
- (void)_userDismissedWorkoutAlert;
- (void)dealloc;
- (id)init;

@end
