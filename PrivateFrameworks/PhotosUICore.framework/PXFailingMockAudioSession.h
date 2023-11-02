
@interface PXFailingMockAudioSession : PXMockAudioSession

- (void)_fail;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)pause;
- (void)play;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 hostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)prepareToPlay;

@end
