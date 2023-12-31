
@protocol MPMediaPlayback

@required

- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)endSeeking;
- (bool)isPreparedToPlay;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)stop;

@end
