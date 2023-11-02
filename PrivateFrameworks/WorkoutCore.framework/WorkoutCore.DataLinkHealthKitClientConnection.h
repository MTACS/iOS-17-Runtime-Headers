
@interface WorkoutCore.DataLinkHealthKitClientConnection : NSObject <HKWorkoutSessionDelegate> {
    void deltaMetricsPublisher;
    void knownSequences;
    void metricsUpdater;
    void notificationHandler;
    void presenceHandler;
    void session;
    void store;
}

- (void).cxx_destruct;
- (id)init;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didDisconnectFromRemoteDeviceWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didReceiveDataFromRemoteDevice:(id)arg2;
- (void)workoutSession:(id)arg1 didReceiveDataFromRemoteWorkoutSession:(id)arg2;

@end
