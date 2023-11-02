
@interface NUImageTransformOrientation : NUImageTransform {
    struct { 
        long long x; 
        long long y; 
    }  _inputImageOrigin;
    struct { 
        long long width; 
        long long height; 
    }  _inputImageSize;
    long long  _orientation;
}

@property (readonly) long long orientation;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOrientation:(long long)arg1 imageSize:(struct { long long x1; long long x2; })arg2;
- (id)initWithOrientation:(long long)arg1 imageSize:(struct { long long x1; long long x2; })arg2 imageOrigin:(struct { long long x1; long long x2; })arg3;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGeometryTransformOrientation:(id)arg1;
- (bool)isIdentityImageTransform;
- (void)nu_updateDigest:(id)arg1;
- (long long)orientation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
