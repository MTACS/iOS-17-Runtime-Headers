
@interface VCPVideoKeyFrameResult : NSObject {
    float  _score;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeStamp;
}

@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeStamp;

- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 andScore:(float)arg2;
- (float)score;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeStamp;

@end
