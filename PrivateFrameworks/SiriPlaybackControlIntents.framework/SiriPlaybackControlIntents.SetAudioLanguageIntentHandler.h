
@interface SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject <SetAudioLanguageIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSetAudioLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetAudioLanguage:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDeviceForSetAudioLanguage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveLanguageForSetAudioLanguage:(id)arg1 withCompletion:(id /* block */)arg2;

@end
