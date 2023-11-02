
@interface SiriPlaybackControlIntents.SetShuffleStateIntentHandler : NSObject <SetShuffleStateIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSetShuffleState:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetShuffleState:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForSetShuffleState:(id)arg1 withCompletion:(id /* block */)arg2;

@end
