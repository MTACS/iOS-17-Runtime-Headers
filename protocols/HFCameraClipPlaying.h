
@protocol HFCameraClipPlaying <NSObject>

@required

- (id)addPeriodicTimeObserverForInterval:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (HMCameraProfile *)cameraProfile;
- (NSArray *)clips;
- (HFCameraClipPosition *)currentPosition;
- (double)currentTime;
- (<HFCameraClipPlayerDelegate> *)delegate;
- (void)endScrubbingWithOffset:(double)arg1;
- (NSError *)error;
- (bool)hasFatalError;
- (bool)isScrubbing;
- (void)pause;
- (void)play;
- (AVQueuePlayer *)player;
- (void)removeTimeObserver:(id)arg1;
- (<HFCameraClipScrubbing> *)scrubber;
- (void)setClips:(NSArray *)arg1;
- (void)setCurrentPosition:(HFCameraClipPosition *)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id <HFCameraClipPlayerDelegate>)arg1;
- (void)setScrubber:(id <HFCameraClipScrubbing>)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setShouldBypassScrubbing:(bool)arg1;
- (bool)shouldBypassScrubbing;
- (long long)timeControlStatus;

@end
