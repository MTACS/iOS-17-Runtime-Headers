
@interface PILocalLightFilterHDR : CIFilter {
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

- (void).cxx_destruct;
- (id)_polyKernelHDR;
- (id)_shadowKernelHDR;
- (id)outputImage;

@end
