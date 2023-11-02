
@interface WorkoutCore.DataLinkHealthKitHostConnection : NSObject <HKWorkoutSessionPrivateDelegate> {
    void commandHandler;
    void currentSequences;
    void healthMonitor;
    void lastAckedSequences;
    void recorder;
    void session;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didDisconnectFromRemoteDeviceWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didReceiveDataFromRemoteWorkoutSession:(id)arg2;
- (void)workoutSession:(id)arg1 didUpdateWorkoutConfiguration:(id)arg2;

@end
