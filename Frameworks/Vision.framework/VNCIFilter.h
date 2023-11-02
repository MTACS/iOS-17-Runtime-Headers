
@interface VNCIFilter : CIFilter {
    CIImage * _inputImage;
    CIColorKernel * _kernel;
}

@property (nonatomic, retain) CIImage *inputImage;

- (void).cxx_destruct;
- (id)initWithKernelName:(id)arg1;
- (id)initWithKernelName:(id)arg1 inputParameters:(id)arg2;
- (id)inputImage;
- (void)setInputImage:(id)arg1;

@end
