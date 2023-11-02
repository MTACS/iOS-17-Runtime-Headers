
@protocol PVLivePlayerSource <NSObject>

@required

- (PVFrameSet *)imageBufferForHostTime:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (void)pause;
- (void)play;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMuted:(bool)arg1;

@end
