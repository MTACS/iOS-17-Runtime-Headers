
@interface WriterReorderQ : NSObject {
    PVFrameSet * _frameSet;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastReorderedTime;
}

@property (nonatomic, retain) PVFrameSet *frameSet;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastReorderedTime;

- (void).cxx_destruct;
- (id)clearQueuedFrameSet;
- (id)frameSet;
- (id)getReorderedFrameSet:(id)arg1;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastReorderedTime;
- (void)setFrameSet:(id)arg1;
- (void)setLastReorderedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
