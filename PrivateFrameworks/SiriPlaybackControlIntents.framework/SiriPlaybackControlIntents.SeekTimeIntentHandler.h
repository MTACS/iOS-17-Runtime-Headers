
@interface SiriPlaybackControlIntents.SeekTimeIntentHandler : NSObject <SeekTimeIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSeekTime:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSeekTime:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForSeekTime:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolvePlayheadPositionForSeekTime:(id)arg1 withCompletion:(id /* block */)arg2;

@end
