
@interface PIFalseColorHDRDebug : CIFilter {
    double  _inputCutoff;
    CIImage * _inputImage;
}

@property double inputCutoff;
@property (retain) CIImage *inputImage;

+ (id)kernel;

- (void).cxx_destruct;
- (double)inputCutoff;
- (id)inputImage;
- (id)outputImage;
- (void)setInputCutoff:(double)arg1;
- (void)setInputImage:(id)arg1;

@end
