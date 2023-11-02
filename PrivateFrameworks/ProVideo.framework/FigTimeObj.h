
@interface FigTimeObj : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

+ (bool)classIsAbstract;
+ (bool)supportsSecureCoding;
+ (id)timeWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (long long)compare:(id)arg1;
- (long long)compareWithTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (unsigned long long)hash;
- (id)initWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)isEqual:(id)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
