
@interface FRCFrameInsertionPoint : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _interpolatedFrameDuration;
    unsigned long long  _numberOfFramesToInsert;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } interpolatedFrameDuration;
@property (nonatomic) unsigned long long numberOfFramesToInsert;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })interpolatedFrameDuration;
- (unsigned long long)numberOfFramesToInsert;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)setInterpolatedFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNumberOfFramesToInsert:(unsigned long long)arg1;
- (void)setPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
