
@interface SiriPlaybackControlIntents.SetVolumeLevelIntentHandler : NSObject <SetVolumeLevelIntentHandling> {
    void accessoryVolumeController;
    void aceServiceHelper;
    void audioSession;
    void deviceSelector;
    void deviceState;
    void featureFlagProvider;
    void playbackController;
    void userDefaultsProvider;
}

- (void).cxx_destruct;
- (void)confirmSetVolumeLevel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetVolumeLevel:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForSetVolumeLevel:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveVolumeLevelForSetVolumeLevel:(id)arg1 withCompletion:(id /* block */)arg2;

@end
