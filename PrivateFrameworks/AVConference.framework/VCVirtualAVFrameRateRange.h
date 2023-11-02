
@interface VCVirtualAVFrameRateRange : AVFrameRateRange {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _virtualMaxFrameDuration;
    double  _virtualMaxFrameRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _virtualMinFrameDuration;
    double  _virtualMinFrameRate;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } maxFrameDuration;
@property double maxFrameRate;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property double minFrameRate;

- (id)initWithMinFrameRate:(double)arg1 maxFrameRate:(double)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFrameDuration;
- (double)maxFrameRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (double)minFrameRate;
- (void)setMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxFrameRate:(double)arg1;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinFrameRate:(double)arg1;

@end
