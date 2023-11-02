
@protocol PXInternalMutableAudioSession <PXMutableAudioSession>

@required

- (NSNumber *)contentLoudnessInLKFS;
- (NSNumber *)contentPeakDecibels;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (NSError *)error;
- (bool)isReadyToPlay;
- (void)setContentLoudnessInLKFS:(NSNumber *)arg1;
- (void)setContentPeakDecibels:(NSNumber *)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setError:(NSError *)arg1;
- (void)setIsReadyToPlay:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
