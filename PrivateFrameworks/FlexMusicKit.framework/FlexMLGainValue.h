
@interface FlexMLGainValue : NSObject {
    float  _gain;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _segmentTime;
}

@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } segmentTime;

- (long long)compare:(id)arg1;
- (float)gain;
- (id)initWithGain:(float)arg1 segmentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })segmentTime;

@end
