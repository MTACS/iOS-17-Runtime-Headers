
@interface NewsAds.VideoAdProviderMetricsHelper : NSObject <SVVideoAdEventTracker, SVVideoEventTracker> {
    void diagnosticMetricsHelper;
    void mediaMetricsHelper;
    void metadata;
}

- (void).cxx_destruct;
- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (id)init;
- (void)muteStateChanged:(bool)arg1;
- (void)nextVideoStartedPlaying;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackPassedQuartile:(unsigned long long)arg1;
- (void)playbackPaused;
- (void)playbackReadyToStart;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)skipped;
- (void)tappedToToggleControlVisibility:(bool)arg1;
- (void)willUnload;

@end
