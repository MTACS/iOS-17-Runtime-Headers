
@interface SiriPlaybackControlIntents.SkipTimeIntentHandler : NSObject <SkipTimeIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSkipTime:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSkipTime:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForSkipTime:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveDurationForSkipTime:(id)arg1 withCompletion:(id /* block */)arg2;

@end
