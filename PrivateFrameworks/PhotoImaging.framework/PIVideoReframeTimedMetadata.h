
@interface PIVideoReframeTimedMetadata : NSObject {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _estimatedCenterMotion;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _estimatedMotionBlur;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _trajectoryHomography;
}

@property (readonly) struct CGVector { double x1; double x2; } estimatedCenterMotion;
@property (readonly) struct CGVector { double x1; double x2; } estimatedMotionBlur;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } trajectoryHomography;

- (struct CGVector { double x1; double x2; })estimatedCenterMotion;
- (struct CGVector { double x1; double x2; })estimatedMotionBlur;
- (void)setEstimatedCenterMotion:(struct CGVector { double x1; double x2; })arg1;
- (void)setEstimatedMotionBlur:(struct CGVector { double x1; double x2; })arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrajectoryHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })trajectoryHomography;

@end
