
@interface RedEyeMinMorphology : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

- (id)outputImage;

@end
