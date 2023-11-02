
@interface CMContinuityCapturePongSoundManager : NSObject <CMContinuityCaptureProximityMonitorDelegate> {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _playedPongForIdentifier;
    NSObject<OS_dispatch_semaphore> * _pongAssertSemaphore;
    CMContinuityCaptureProximityMonitor * _proximityMonitor;
    NSObject<OS_dispatch_source> * _proximityTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_playPongSoundForIdentifier:(id)arg1;
- (void)_pongIfNeededWithShouldConsiderPongHistory:(bool)arg1 forIdentifier:(id)arg2;
- (bool)_shouldUseNearbyInteractionToDeterminePongSound;
- (void)acquireSystemPongAssertion;
- (void)device:(id)arg1 isNearby:(bool)arg2;
- (id)init;
- (void)pongIfNeededWithShouldConsiderPongHistory:(bool)arg1 forIdentifier:(id)arg2;
- (void)releaseSystemPongAssertion;
- (void)waitForPongCompletion:(id /* block */)arg1;

@end
