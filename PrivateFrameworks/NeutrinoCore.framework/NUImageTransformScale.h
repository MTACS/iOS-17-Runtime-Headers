
@interface NUImageTransformScale : NUImageTransformAffine {
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (readonly) struct { long long x1; long long x2; } scale;

- (id)initWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithScale:(struct { long long x1; long long x2; })arg1;
- (id)inverseTransform;
- (bool)isIdentityImageTransform;
- (struct { long long x1; long long x2; })scale;

@end
