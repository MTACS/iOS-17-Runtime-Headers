
@interface PXFocusTimelineAction : NSObject {
    long long  _kind;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) long long kind;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (long long)kind;
- (void)setKind:(long long)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
