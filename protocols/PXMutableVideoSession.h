
@protocol PXMutableVideoSession <NSObject>

@required

- (bool)allowsExternalPlayback;
- (long long)desiredPlayState;
- (bool)isLoopingEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackStartTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackTimeRange;
- (bool)preventsSleepDuringVideoPlayback;
- (bool)seekToBeginningAtEnd;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAudioSessionCategory:(NSString *)arg1 mode:(NSString *)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setLoopingEnabled:(bool)arg1;
- (void)setPlaybackStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaybackTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setPreventsSleepDuringVideoPlayback:(bool)arg1;
- (void)setSeekToBeginningAtEnd:(bool)arg1;
- (void)setShouldDisableAutomaticPixelBufferUpdates:(bool)arg1;
- (void)setVolume:(float)arg1 withFade:(bool)arg2;
- (bool)shouldDisableAutomaticPixelBufferUpdates;

@end
