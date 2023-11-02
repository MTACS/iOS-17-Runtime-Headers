
@interface PICurvesFilterHDR : CIFilter {
    CIImage * _inputImage;
    CIImage * _inputTableImage;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputTableImage;

- (void).cxx_destruct;
- (id)curvesKernel;
- (id)inputImage;
- (id)inputTableImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputTableImage:(id)arg1;

@end
