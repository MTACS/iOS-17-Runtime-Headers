
@interface FRCFrameTimingInfo : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)setPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
