
@interface CIOpTile : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputScale;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CIOpTile;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
