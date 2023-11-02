
@interface FigIrisAutoTrimmerMotionSample : NSObject {
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _accel;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _attitude;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _delta;
    double  _deltaPeriod;
    struct { 
        float x; 
        float y; 
        float z; 
    }  _gravity;
    NSDictionary * _inferences;
    NSMutableDictionary * _intermediateCalculations;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _originatingFrameTime;
    double  _timestamp;
    int  _vitalityObjectCount;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } accel;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } attitude;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } cmTimestamp;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } delta;
@property (nonatomic, readonly) double deltaPeriod;
@property (nonatomic, readonly) struct { float x1; float x2; float x3; } gravity;
@property (nonatomic, retain) NSDictionary *inferences;
@property (nonatomic, readonly) NSMutableDictionary *intermediateCalculations;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } originatingFrameTime;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic) int vitalityObjectCount;

+ (void)initialize;

- (struct { double x1; double x2; double x3; double x4; })accel;
- (struct { double x1; double x2; double x3; double x4; })attitude;
- (struct { double x1; double x2; double x3; double x4; })attitudeRelativeTo:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cmTimestamp;
- (void)dealloc;
- (struct { double x1; double x2; double x3; double x4; })delta;
- (double)deltaPeriod;
- (struct { float x1; float x2; float x3; })gravity;
- (id)inferences;
- (id)initWithAttitude:(const struct { double x1; double x2; double x3; double x4; }*)arg1 gravity:(const struct { float x1; float x2; float x3; }*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 previousSample:(id)arg5;
- (id)intermediateCalculations;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })originatingFrameTime;
- (void)prepareIntermediates:(long long)arg1;
- (void)setInferences:(id)arg1;
- (void)setVitalityObjectCount:(int)arg1;
- (double)timestamp;
- (int)vitalityObjectCount;

@end
