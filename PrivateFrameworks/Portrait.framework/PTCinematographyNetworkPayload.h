
@interface PTCinematographyNetworkPayload : NSObject {
    PTCinematographyDetection * _detection;
    bool  _isMissingDetection;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (readonly) PTCinematographyDetection *detection;
@property (readonly) bool isMissingDetection;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)detection;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 detection:(id)arg2 missing:(bool)arg3;
- (bool)isMissingDetection;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
