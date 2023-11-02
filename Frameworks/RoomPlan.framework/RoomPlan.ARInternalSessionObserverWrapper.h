
@interface RoomPlan.ARInternalSessionObserverWrapper : NSObject <ARInternalSessionObserver, ARReplayConfigurationDelegate> {
    void captureSession;
}

- (void).cxx_destruct;
- (id)init;
- (void)replayConfigurationDidFinishReplaying:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 didUpdateSpatialMappingPointClouds:(id)arg2;
- (void)session:(id)arg1 requestedRunWithConfiguration:(id)arg2 options:(unsigned long long)arg3;
- (void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
- (bool)sessionShouldAttemptRelocalization:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;

@end
