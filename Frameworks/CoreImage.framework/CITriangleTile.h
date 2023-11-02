
@interface CITriangleTile : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CITriangleTile;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
