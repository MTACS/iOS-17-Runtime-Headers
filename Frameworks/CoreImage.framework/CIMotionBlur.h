
@interface CIMotionBlur : CIFilter {
    NSNumber * inputAngle;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 legacyExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (bool)_isIdentity;
- (id)_kernel;
- (id)inputAngle;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
