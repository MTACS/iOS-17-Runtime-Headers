
@interface ADRefinedPolynomialsLensDistortionModel : ADDynamicPolynomialsLensDistortionModel {
    float  _focalLength;
    float  _pixelSize;
}

@property (nonatomic) float focalLength;
@property (nonatomic) float pixelSize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (float)focalLength;
- (unsigned long long)hash;
- (id)initWithDistortionCenter:(struct CGPoint { double x1; double x2; })arg1 pixelSize:(float)arg2 focalLength:(float)arg3 polynomialsBase:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg4 polynomialsDynamic:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg5;
- (bool)isEqual:(id)arg1;
- (float)pixelSize;
- (void)setDynamicFactor:(float)arg1;
- (void)setFocalLength:(float)arg1;
- (void)setPixelSize:(float)arg1;
- (void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (void)updateDynamicFactor;

@end
