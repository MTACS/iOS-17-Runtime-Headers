
@interface PIBilateralFilter : CIFilter {
    NSNumber * _inputEdgeDetail;
    CIImage * _inputImage;
    NSNumber * _inputRadius;
}

@property (retain) NSNumber *inputEdgeDetail;
@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)inputEdgeDetail;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputEdgeDetail:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
