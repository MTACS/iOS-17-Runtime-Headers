
@interface PIApertureRedEyeFilter : CIFilter {
    CIImage * inputImage;
    NSArray * inputSpots;
}

- (void).cxx_destruct;
- (id)outputImage;

@end
