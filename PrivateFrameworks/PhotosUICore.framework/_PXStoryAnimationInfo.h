
@interface _PXStoryAnimationInfo : NSObject {
    PXStoryAnimation * _animation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
}

@property (nonatomic, readonly) PXStoryAnimation *animation;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (void).cxx_destruct;
- (id)animation;
- (id)initWithAnimation:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
