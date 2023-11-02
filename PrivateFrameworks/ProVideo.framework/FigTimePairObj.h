
@interface FigTimePairObj : NSObject <NSCopying, NSSecureCoding> {
    struct PC_CMTimePair { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } first; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } second; 
    }  _pair;
}

+ (id)pairWithPair:(struct PC_CMTimePair { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })first;
- (void)getValue:(struct PC_CMTimePair { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigTimePair:(struct PC_CMTimePair { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithFirst:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 Second:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)isEqual:(id)arg1;
- (struct PC_CMTimePair { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })pair;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })second;
- (void)setFirst:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPair:(struct PC_CMTimePair { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setSecond:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
