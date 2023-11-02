
@interface RedEyeGlintFinder : CIFilter {
    CIImage * inputImage;
    CIVector * inputThresholds;
}

- (id)outputImage;

@end
