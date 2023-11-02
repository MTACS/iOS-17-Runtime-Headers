
@interface PXCurrentTimeRecord : NSObject {
    bool  _isValid;
    float  _rate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sampleTime;
    double  _sampleTimestamp;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } sampleTime;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)description;
- (id)initWithSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 rate:(float)arg2;
- (bool)isValid;
- (float)rate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sampleTime;

@end
