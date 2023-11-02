
@interface CIRAWTemperatureAdjust : CIFilter {
    NSNumber * inputEV;
    CIImage * inputImage;
    NSNumber * inputVersion;
    CIVector * inputWhitePoint;
}

- (id)outputImage;

@end
