
@interface SiriPlaybackControlIntents.ResumeMediaIntentHandler : NSObject <ResumeMediaIntentHandling> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  aceBlockClearAudioQueueForResume;
    void aceServiceHelper;
    void analyticsService;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmResumeMedia:(id)arg1 completion:(id /* block */)arg2;
- (void)handleResumeMedia:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDevicesForResumeMedia:(id)arg1 withCompletion:(id /* block */)arg2;

@end
