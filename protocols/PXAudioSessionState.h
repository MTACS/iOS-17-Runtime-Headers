
@protocol PXAudioSessionState <NSObject>

@required

- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (NSError *)error;
- (bool)isReadyToPlay;
- (long long)status;
- (float)targetLoudnessInLKFS;
- (float)volume;

@end
