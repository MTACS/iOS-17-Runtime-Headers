
@interface CIKaleidoscope : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    NSNumber * inputCount;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) NSNumber *inputCount;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_outputExtent;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputCount;
- (id)inputImage;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputCount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
