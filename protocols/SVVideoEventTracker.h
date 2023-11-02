
@protocol SVVideoEventTracker <NSObject>

@optional

- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (void)finishedLoadingVideoWithURL:(NSURL *)arg1;
- (double)impressionThreshold;
- (void)muteStateChanged:(bool)arg1;
- (void)playbackFailedWithError:(NSError *)arg1;
- (void)playbackFinished;
- (void)playbackInitiatedWithButtonTapped:(bool)arg1;
- (void)playbackPassedImpressionThreshold;
- (void)playbackPassedQuartile:(unsigned long long)arg1;
- (void)playbackPaused;
- (void)playbackReadyToStart;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)startedLoadingVideo;
- (void)startedPictureInPicture;
- (void)stoppedPictureInPicture;
- (void)tappedToToggleControlVisibility:(bool)arg1;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;

@end
