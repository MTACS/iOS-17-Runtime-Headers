
@interface SiriPlaybackControlIntents.GetVolumeLevelIntentHandler : NSObject <GetVolumeLevelIntentHandling> {
    void accessoryVolumeController;
    void aceServiceHelper;
    void deviceSelector;
    void deviceState;
    void featureFlagProvider;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmGetVolumeLevel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetVolumeLevel:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDeviceForGetVolumeLevel:(id)arg1 withCompletion:(id /* block */)arg2;

@end
