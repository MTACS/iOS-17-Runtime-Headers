
@interface RedEyeDifference : CIFilter {
    CIImage * inputImage;
    CIImage * inputSubtractedImage;
}

- (id)outputImage;

@end
