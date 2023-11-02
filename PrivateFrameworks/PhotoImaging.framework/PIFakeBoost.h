
@interface PIFakeBoost : CIFilter {
    double  _inputBoost;
    CIImage * _inputImage;
    NSArray * _inputParams;
    NSString * _inputVersion;
}

@property double inputBoost;
@property (retain) CIImage *inputImage;
@property (copy) NSArray *inputParams;
@property (copy) NSString *inputVersion;

+ (id)boostParametersFromRawProperties:(id)arg1;
+ (id)currentVersion;
+ (id)kernelFB0;
+ (id)kernelFB3;

- (void).cxx_destruct;
- (double)inputBoost;
- (id)inputImage;
- (id)inputParams;
- (id)inputVersion;
- (id)outputImage;
- (id)outputImageFB0;
- (id)outputImageFB3;
- (void)setInputBoost:(double)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputParams:(id)arg1;
- (void)setInputVersion:(id)arg1;

@end
