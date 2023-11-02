
@interface SeymourClient.HealthWorkoutSession : NSObject <HKLiveWorkoutBuilderDelegate, HKWorkoutSessionDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_calorieStream;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_sessionStateStream;
    void builder;
    void caloriesUpdated;
    void metadata;
    void sessionIdentifier;
    void sessionStateUpdated;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workout;
    void workoutSession;
}

- (void).cxx_destruct;
- (id)init;
- (void)workoutBuilder:(id)arg1 didCollectDataOfTypes:(id)arg2;
- (void)workoutBuilder:(id)arg1 didEndActivity:(id)arg2;
- (void)workoutBuilderDidCollectEvent:(id)arg1;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;

@end
