
@interface PILocalLightMapPrepareHDR : CIFilter {
    CIImage * inputGuideImage;
    NSData * inputLightMap;
    NSNumber * inputLightMapHeight;
    NSNumber * inputLightMapWidth;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;

@end
