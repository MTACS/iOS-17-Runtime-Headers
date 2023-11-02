
@interface BaseTrack : NSObject {
    Detection * _firstObservation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstTimestamp;
    long long  _identifier;
    Detection * _lastObservation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTimestamp;
    long long  _type;
    BaseTrack * pairTrack;
}

@property (nonatomic, readonly) Detection *firstObservation;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } firstTimestamp;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) Detection *lastObservation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastObservationBounds;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } lastTimestamp;
@property (nonatomic) BaseTrack *pairTrack;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)addObservation:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)dealloc;
- (id)firstObservation;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })firstTimestamp;
- (long long)identifier;
- (id)initWithObservation:(id)arg1 identifier:(long long)arg2 type:(long long)arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)lastObservation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastObservationBounds;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastTimestamp;
- (id)pairTrack;
- (void)setPairTrack:(id)arg1;
- (long long)type;

@end
