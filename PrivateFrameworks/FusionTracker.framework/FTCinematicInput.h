
@interface FTCinematicInput : NSObject {
    bool  _detectorDidRun;
    long long  _highPriorityTrackId;
    NSArray * _observations;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sourceFrameTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _tapPosition;
    FTCinematicTapRequest * _tapRequest;
}

@property (nonatomic) bool detectorDidRun;
@property (nonatomic) long long highPriorityTrackId;
@property (nonatomic, retain) NSArray *observations;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sourceFrameTimestamp;
@property (nonatomic) struct CGPoint { double x1; double x2; } tapPosition;
@property (nonatomic, retain) FTCinematicTapRequest *tapRequest;

- (void).cxx_destruct;
- (bool)detectorDidRun;
- (long long)highPriorityTrackId;
- (id)init;
- (struct vector<ft::Observation, std::allocator<ft::Observation>> { struct Observation {} *x1; struct Observation {} *x2; struct __compressed_pair<ft::Observation *, std::allocator<ft::Observation>> { struct Observation {} *x_3_1_1; } x3; })mapToInternalObservations;
- (id)observations;
- (void)setDetectorDidRun:(bool)arg1;
- (void)setHighPriorityTrackId:(long long)arg1;
- (void)setObservations:(id)arg1;
- (void)setSourceFrameTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTapPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTapRequest:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceFrameTimestamp;
- (struct CGPoint { double x1; double x2; })tapPosition;
- (id)tapRequest;

@end
