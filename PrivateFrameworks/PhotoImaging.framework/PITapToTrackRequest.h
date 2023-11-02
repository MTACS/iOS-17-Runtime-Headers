
@interface PITapToTrackRequest : NURenderRequest {
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedImagePoint;
    id /* block */  _progressHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedImagePoint;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 pointToTrack:(struct CGPoint { double x1; double x2; })arg3;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (struct CGPoint { double x1; double x2; })normalizedImagePoint;
- (id /* block */)progressHandler;
- (void)setNormalizedImagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (void)submit:(id /* block */)arg1;

@end
