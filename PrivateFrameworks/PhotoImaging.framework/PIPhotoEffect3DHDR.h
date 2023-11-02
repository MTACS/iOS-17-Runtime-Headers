
@interface PIPhotoEffect3DHDR : CIFilter {
    CIImage * _inputDepthMap;
    CIImage * _inputImage;
    float  _inputThreshold;
}

@property (retain) CIImage *inputDepthMap;
@property (retain) CIImage *inputImage;
@property float inputThreshold;

+ (id)kernel;

- (void).cxx_destruct;
- (id)inputDepthMap;
- (id)inputImage;
- (float)inputThreshold;
- (id)outputImage;
- (id)photoEffectName;
- (void)setInputDepthMap:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputThreshold:(float)arg1;

@end
