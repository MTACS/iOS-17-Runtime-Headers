
@interface CICrop : CIFilter <_CIFilterProperties> {
    CIImage * inputImage;
    CIVector * inputRectangle;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputRectangle;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)inputImage;
- (id)inputRectangle;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRectangle:(id)arg1;

@end
