
@interface CIExposureAdjust : CIFilter {
    NSNumber * inputEV;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputEV;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)inputEV;
- (id)inputImage;
- (id)outputImage;
- (void)setInputEV:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
