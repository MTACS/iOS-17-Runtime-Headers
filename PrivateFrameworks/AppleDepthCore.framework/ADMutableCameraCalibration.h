
@interface ADMutableCameraCalibration : ADCameraCalibration

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraToPlatformTransform;
@property (nonatomic, retain) <ADLensDistortionModel> *distortionModel;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsicMatrix;
@property (nonatomic) float pixelSize;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceDimensions;

+ (id)new;

- (bool)adjustForImageRotation:(long long)arg1;
- (void)centerCrop:(struct CGSize { double x1; double x2; })arg1;
- (void)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (bool)scale:(struct CGSize { double x1; double x2; })arg1;
- (void)setCameraToPlatformTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDistortionModel:(id)arg1;
- (void)setIntrinsicMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setPixelSize:(float)arg1;
- (void)setReferenceDimensions:(struct CGSize { double x1; double x2; })arg1;

@end
