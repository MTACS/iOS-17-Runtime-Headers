
@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {
    NSString * inputCameraModel;
    NSArray * inputCorrectionInfo;
    CIImage * inputImage;
}

@property (nonatomic, copy) NSString *inputCameraModel;
@property (nonatomic, copy) NSArray *inputCorrectionInfo;
@property (nonatomic, retain) CIImage *inputImage;

- (id)_initFromProperties:(id)arg1;
- (bool)_isIdentity;
- (id)_outputProperties;
- (id)inputCameraModel;
- (id)inputCorrectionInfo;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCameraModel:(id)arg1;
- (void)setInputCorrectionInfo:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
