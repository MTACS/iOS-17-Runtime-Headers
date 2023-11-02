
@interface JDTimestampedPointCloud : NSObject {
    JDPointCloud * _pointCloud;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (readonly) JDPointCloud *pointCloud;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (void).cxx_destruct;
- (id)initWithPointCloud:(id)arg1 andTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)pointCloud;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
