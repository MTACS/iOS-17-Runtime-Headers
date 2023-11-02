
@interface CILensModelApply : CIFilter {
    CIImage * inputImage;
    CIImage * inputLensModelParams;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputLensModelParams;

- (id)inputImage;
- (id)inputLensModelParams;
- (id)kernel;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputLensModelParams:(id)arg1;

@end
