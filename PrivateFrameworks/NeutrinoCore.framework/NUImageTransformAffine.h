
@interface NUImageTransformAffine : NUImageTransform {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transformInv;
}

@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGeometryTransformAffine:(id)arg1;
- (bool)isIdentityImageTransform;
- (void)nu_updateDigest:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
