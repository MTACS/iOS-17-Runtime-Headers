
@interface CIRedEyeCorrection : CIFilter {
    NSString * inputCameraModel;
    NSDictionary * inputCorrectionInfo;
    CIImage * inputImage;
}

@property (nonatomic, copy) NSString *inputCameraModel;
@property (nonatomic, copy) NSDictionary *inputCorrectionInfo;
@property (nonatomic, retain) CIImage *inputImage;

- (bool)_isIdentity;
- (id)inputCameraModel;
- (id)inputCorrectionInfo;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCameraModel:(id)arg1;
- (void)setInputCorrectionInfo:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
