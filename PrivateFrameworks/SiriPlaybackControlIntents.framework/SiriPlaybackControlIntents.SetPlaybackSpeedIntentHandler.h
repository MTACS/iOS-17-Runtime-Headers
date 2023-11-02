
@interface SiriPlaybackControlIntents.SetPlaybackSpeedIntentHandler : NSObject <SetPlaybackSpeedIntentHandling> {
    void aceServiceHelper;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSetPlaybackSpeed:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetPlaybackSpeed:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForSetPlaybackSpeed:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolvePlaybackSpeedTypeForSetPlaybackSpeed:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSpeedMagnitudeForSetPlaybackSpeed:(id)arg1 withCompletion:(id /* block */)arg2;

@end
