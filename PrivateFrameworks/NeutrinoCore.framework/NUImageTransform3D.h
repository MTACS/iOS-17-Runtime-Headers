
@interface NUImageTransform3D : NUImageTransform {
    bool  _inverseProjection;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transformInv;
}

@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithTransform3D:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGeometryTransform3D:(id)arg1;
- (bool)isIdentityImageTransform;
- (bool)isInverseOf:(id)arg1;
- (void)nu_updateDigest:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
