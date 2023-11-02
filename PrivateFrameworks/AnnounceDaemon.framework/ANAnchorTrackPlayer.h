
@interface ANAnchorTrackPlayer : ANTrackPlayer {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (void)handleInterruptionDelay:(double)arg1;
- (void)playInternalWithCompletionHandler:(id /* block */)arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
