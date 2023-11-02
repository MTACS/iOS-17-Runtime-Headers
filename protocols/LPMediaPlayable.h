
@protocol LPMediaPlayable <NSObject>

@required

- (bool)hasMuteControl;
- (bool)isPlaying;
- (void)resetPlaybackState;
- (void)setPlaying:(bool)arg1;

@end
