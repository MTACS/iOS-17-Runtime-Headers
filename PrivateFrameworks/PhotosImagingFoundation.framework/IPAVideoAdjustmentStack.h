
@interface IPAVideoAdjustmentStack : IPAAdjustmentStack {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _naturalDuration;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } naturalDuration;

- (id)_debugDescriptionSuffix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)minimumVersionForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (void)setNaturalDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
