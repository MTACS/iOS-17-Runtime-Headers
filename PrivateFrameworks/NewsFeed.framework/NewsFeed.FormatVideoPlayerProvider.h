
@interface NewsFeed.FormatVideoPlayerProvider : NSObject <SVVideoProviding> {
    void coordinator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  data;
    void metadata;
}

@property (nonatomic, readonly) double impressionThreshold;

- (void).cxx_destruct;
- (double)impressionThreshold;
- (id)init;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiatedWithButtonTapped:(bool)arg1;
- (void)playbackPaused;
- (void)playbackReadyToStart;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)startedPictureInPicture;
- (void)stoppedPictureInPicture;

@end
