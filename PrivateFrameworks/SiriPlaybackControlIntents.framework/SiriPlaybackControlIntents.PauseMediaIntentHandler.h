
@interface SiriPlaybackControlIntents.PauseMediaIntentHandler : NSObject <PauseMediaIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmPauseMedia:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePauseMedia:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForPauseMedia:(id)arg1 withCompletion:(id /* block */)arg2;

@end
