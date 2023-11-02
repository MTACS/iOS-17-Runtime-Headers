
@interface CIParallelogramTile : CIFilter {
    NSNumber * inputAcuteAngle;
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
