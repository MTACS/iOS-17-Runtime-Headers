
@interface SiriPlaybackControlIntents.SetRepeatStateIntentHandler : NSObject <SetRepeatStateIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSetRepeatState:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetRepeatState:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForSetRepeatState:(id)arg1 withCompletion:(id /* block */)arg2;

@end
