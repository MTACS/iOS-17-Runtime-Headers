
@interface SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSetSubtitleState:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetSubtitleState:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDeviceForSetSubtitleState:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveLanguageForSetSubtitleState:(id)arg1 withCompletion:(id /* block */)arg2;

@end
