
@interface SNFallingEdgeSmoother : NSObject {
    NSValue * _lastEventTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _smoothingDuration;
}

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSmoothingDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)processValue:(bool)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
