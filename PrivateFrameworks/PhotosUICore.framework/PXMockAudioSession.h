
@interface PXMockAudioSession : PXAudioSession {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
    NSTimer * _currentTimeUpdateTimer;
}

- (void).cxx_destruct;
- (void)_handleCurrentTimeUpdateTimer:(id)arg1;
- (void)_invalidateCurrentTimeUpdateTimer;
- (void)_startCurrentTimeUpdateTimer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;
- (void)pause;
- (void)play;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)prepareToPlay;

@end
