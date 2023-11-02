
@interface CICameraCalibrationLensCorrection : CIFilter {
    AVCameraCalibrationData * inputAVCameraCalibrationData;
    CIImage * inputImage;
    NSNumber * inputUseInverseLookUpTable;
}

@property (nonatomic, retain) AVCameraCalibrationData *inputAVCameraCalibrationData;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputUseInverseLookUpTable;

+ (id)customAttributes;

- (struct CGPoint { double x1; double x2; })ReferenceensDistortionPointForPoint:(struct CGPoint { double x1; double x2; })arg1 lookupTable:(id)arg2 distortionOpticalCenter:(struct CGPoint { double x1; double x2; })arg3 imageSize:(struct CGSize { double x1; double x2; })arg4;
- (id)inputAVCameraCalibrationData;
- (id)inputImage;
- (id)inputUseInverseLookUpTable;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOf:(int)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userInfo:(id)arg3;
- (void)setInputAVCameraCalibrationData:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputUseInverseLookUpTable:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
