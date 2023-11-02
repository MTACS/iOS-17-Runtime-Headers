
@interface FRCFrameInternalTimingInfo : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    long long  _frameIsAtBigGap;
    long long  _framesToBeDuplicated;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _interpolatedFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic) long long frameIsAtBigGap;
@property (nonatomic) long long framesToBeDuplicated;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } interpolatedFrameDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (long long)frameIsAtBigGap;
- (long long)framesToBeDuplicated;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })interpolatedFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFrameIsAtBigGap:(long long)arg1;
- (void)setFramesToBeDuplicated:(long long)arg1;
- (void)setInterpolatedFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
