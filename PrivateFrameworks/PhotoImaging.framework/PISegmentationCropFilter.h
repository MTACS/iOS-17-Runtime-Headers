
@interface PISegmentationCropFilter : CIFilter {
    CIImage * _inputImage;
    float  _inputThreshold;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic) float inputThreshold;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputCropRect;

- (void).cxx_destruct;
- (id)init;
- (id)inputImage;
- (float)inputThreshold;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputCropRect;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputThreshold:(float)arg1;

@end
