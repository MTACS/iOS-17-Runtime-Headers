
@interface ADPolynomialsLensDistortionModel : NSObject <ADLensDistortionModel> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _distortionCenter;
    struct ADDistortionPolynomials { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _polynomials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } distortionCenter;
@property (nonatomic) const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*distortionPolynomials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)hashPolynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg1;
+ (bool)isEqualPolynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg1 otherPolynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg2;

- (void)adjustForImageRotation:(long long)arg1 forDimensions:(struct CGSize { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDimensions:(struct CGSize { double x1; double x2; })arg2;
- (id)dictionaryRepresentation:(bool)arg1;
- (void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withPixelSize:(float)arg3 referenceDimensions:(struct CGSize { double x1; double x2; })arg4 outDistortedPixels:(struct CGPoint { double x1; double x2; }*)arg5;
- (struct CGPoint { double x1; double x2; })distortionCenter;
- (const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)distortionPolynomials;
- (double)getMaxDistortedRadius:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDistortionCenter:(struct CGPoint { double x1; double x2; })arg1 andPloynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg2;
- (id)initWithDistortionCenter:(struct CGPoint { double x1; double x2; })arg1 andPolynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg2;
- (bool)isEqual:(id)arg1;
- (void)scale:(float)arg1;
- (void)setDistortionCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDistortionPolynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg1;
- (void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withPixelSize:(float)arg3 referenceDimensions:(struct CGSize { double x1; double x2; })arg4 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg5;

@end
