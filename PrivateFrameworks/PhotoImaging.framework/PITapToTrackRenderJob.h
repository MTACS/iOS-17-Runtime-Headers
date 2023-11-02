
@interface PITapToTrackRenderJob : NURenderJob {
    bool  _clientRequestedStop;
    PTCinematographyTrack * _completedTrack;
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

@property bool clientRequestedStop;
@property (nonatomic, retain) PTCinematographyTrack *completedTrack;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedImagePoint;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (void).cxx_destruct;
- (void)_reportProgressAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3;
- (bool)clientRequestedStop;
- (id)completedTrack;
- (struct CGPoint { double x1; double x2; })normalizedImagePoint;
- (bool)prepare:(out id*)arg1;
- (id /* block */)progressHandler;
- (id)result;
- (id)scalePolicy;
- (void)setClientRequestedStop:(bool)arg1;
- (void)setCompletedTrack:(id)arg1;
- (void)setNormalizedImagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (bool)wantsCompleteStage;
- (bool)wantsOutputVideo;
- (bool)wantsRenderStage;

@end
