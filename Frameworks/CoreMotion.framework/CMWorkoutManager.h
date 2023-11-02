
@interface CMWorkoutManager : NSObject {
    CMWorkoutManagerInternal * _internal;
}

@property (nonatomic, readonly) CMWorkoutManagerInternal *_internal;
@property (nonatomic) <CMWorkoutManagerDelegate> *delegate;

+ (bool)isAvailable;

- (id)_internal;
- (void)beginWorkoutSession:(id)arg1 withWorkout:(id)arg2 enableWorkoutChangeDetection:(bool)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endWorkoutSession:(id)arg1;
- (void)getPromptsNeededForWorkoutType:(long long)arg1 handler:(id /* block */)arg2;
- (id)init;
- (void)pauseWorkout:(id)arg1;
- (void)resumeWorkout:(id)arg1;
- (void)setCurrentWorkoutType:(id)arg1 isManualTransition:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMode:(unsigned long long)arg1 forWorkout:(id)arg2;
- (void)setSuggestedStopTimeout:(double)arg1;
- (void)startWorkout:(id)arg1;
- (void)stopWorkout:(id)arg1;
- (unsigned long long)supportedMetricsForWorkoutType:(long long)arg1;
- (void)triggerWorkoutLocationUpdateForTesting:(long long)arg1;
- (void)userDismissedWorkoutAlert;

@end
