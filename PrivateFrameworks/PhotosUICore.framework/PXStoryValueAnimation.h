
@interface PXStoryValueAnimation : PXStoryAnimation {
    struct { 
        long long curve; 
        union { 
            double linearFraction; 
        } ; 
    }  _curveInfo;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
}

@property (nonatomic, readonly) struct { long long x1; union { double x_2_1_1; } x2; } curveInfo;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;

- (struct { long long x1; union { double x_2_1_1; } x2; })curveInfo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)init;
- (id)initWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 curveInfo:(struct { long long x1; union { double x_2_1_1; } x2; })arg3;
- (void)timeDidChange;
- (void)updateCurrentValueWithProgress:(double)arg1;

@end
