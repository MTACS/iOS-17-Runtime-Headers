
@interface NUTimeTransformTrim : NUGeometryTransform {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _beginTime;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } beginTime;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })beginTime;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTrimBeginTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transformTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
