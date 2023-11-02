
@interface CILocalLightMapPrepare : CIFilter {
    CIImage * inputGuideImage;
    NSData * inputLightMap;
    NSNumber * inputLightMapHeight;
    NSNumber * inputLightMapWidth;
}

+ (id)customAttributes;

- (id)outputImage;

@end
