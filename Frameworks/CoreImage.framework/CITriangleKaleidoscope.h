
@interface CITriangleKaleidoscope : CIFilter {
    NSNumber * inputDecay;
    CIImage * inputImage;
    CIVector * inputPoint;
    NSNumber * inputRotation;
    NSNumber * inputSize;
}

@property (nonatomic, retain) NSNumber *inputDecay;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputPoint;
@property (nonatomic, retain) NSNumber *inputRotation;
@property (nonatomic, retain) NSNumber *inputSize;

+ (id)customAttributes;

- (id)_colorKernel;
- (id)_geomKernel;
- (id)inputDecay;
- (id)inputImage;
- (id)inputPoint;
- (id)inputRotation;
- (id)inputSize;
- (id)outputImage;
- (void)setInputDecay:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint:(id)arg1;
- (void)setInputRotation:(id)arg1;
- (void)setInputSize:(id)arg1;

@end
