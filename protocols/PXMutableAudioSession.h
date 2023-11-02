
@protocol PXMutableAudioSession <PXAudioSessionState>

@required

- (void)pause;
- (void)performFinalCleanup;
- (void)play;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)prepareToPlay;
- (void)setTargetLoudnessInLKFS:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)targetLoudnessInLKFS;
- (float)volume;

@end
