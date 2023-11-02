
@interface CILensModelApplyV3 : CIFilter {
    CIImage * inputImage;
    CIImage * inputLensModelImage;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputLensModelImage;

- (id)inputImage;
- (id)inputLensModelImage;
- (id)kernel;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputLensModelImage:(id)arg1;

@end
