
@interface PIHDRInverseHLGFilter : CIFilter {
    CIImage * _inputImage;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)inverseHLGLumaBlendingKernel;

- (void).cxx_destruct;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
