
@interface JDMutableCameraCalibrationData : JDCameraCalibrationData

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraToPlatformTransform;
@property (nonatomic, retain) NSData *distortedRadii;
@property (nonatomic) int distortionModel;
@property (nonatomic) const struct JDGDCPolynomials { float x1[8]; float x2[8]; }*distortionPolynomials;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsicMatrix;
@property (nonatomic) struct CGPoint { double x1; double x2; } lensDistortionCenter;
@property (nonatomic) float pixelSize;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceDimensions;
@property (nonatomic, retain) NSData *undistortedRadii;

- (void)centerCrop:(struct CGSize { double x1; double x2; })arg1;
- (void)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)scale:(struct CGSize { double x1; double x2; })arg1;
- (void)setCameraToPlatformTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDistortedRadii:(id)arg1;
- (void)setDistortionModel:(int)arg1;
- (void)setDistortionModelToWarperMesh:(id)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)setDistortionPolynomials:(const struct JDGDCPolynomials { float x1[8]; float x2[8]; }*)arg1;
- (void)setInternalCalib:(id)arg1;
- (void)setIntrinsicMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setLensDistortionCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPixelSize:(float)arg1;
- (void)setReferenceDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setUndistortedRadii:(id)arg1;

@end
