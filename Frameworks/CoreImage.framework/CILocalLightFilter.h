
@interface CILocalLightFilter : CIFilter {
    CIImage * inputGuideImage;
    CIImage * inputImage;
    NSData * inputLightMap;
    NSNumber * inputLightMapHeight;
    CIImage * inputLightMapImage;
    NSNumber * inputLightMapWidth;
    NSNumber * inputLocalLight;
    NSNumber * inputSmartShadows;
}

+ (id)customAttributes;

- (id)_polyKernel;
- (id)_shadowKernel;
- (id)outputImage;

@end
