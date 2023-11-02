
@protocol MPMusicPlayerControllerServerActions <NSObject>

@required

- (void)beginSeekWithDirection:(long long)arg1;
- (void)endSeek;
- (void)getRepeatModeWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)getShuffleModeWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)pauseWithFadeDuration:(long long)arg1;
- (void)play;
- (void)reshuffle;
- (void)setElapsedTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setPlaybackRate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)skipWithBehavior:(long long)arg1;
- (void)stop;

@end
