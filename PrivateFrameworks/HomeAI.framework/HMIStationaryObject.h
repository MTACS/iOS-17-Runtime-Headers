
@interface HMIStationaryObject : HMFObject {
    HMIVideoAnalyzerEvent * _event;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (readonly) HMIVideoAnalyzerEvent *event;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)event;
- (id)initWithEvent:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
