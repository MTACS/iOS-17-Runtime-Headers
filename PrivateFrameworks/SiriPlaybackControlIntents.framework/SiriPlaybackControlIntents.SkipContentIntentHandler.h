
@interface SiriPlaybackControlIntents.SkipContentIntentHandler : NSObject <SkipContentIntentHandling> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  aceBlockClearAudioQueueForSkip;
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSkipContent:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSkipContent:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForSkipContent:(id)arg1 withCompletion:(id /* block */)arg2;

@end
