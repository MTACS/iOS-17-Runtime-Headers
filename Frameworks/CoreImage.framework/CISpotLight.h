
@interface CISpotLight : CIFilter {
    NSNumber * inputBrightness;
    CIColor * inputColor;
    NSNumber * inputConcentration;
    CIImage * inputImage;
    CIVector * inputLightPointsAt;
    CIVector * inputLightPosition;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CISpotLight;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
