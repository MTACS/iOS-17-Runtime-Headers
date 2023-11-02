
@interface _PIDynamicLocalLightMapPrepare : CIFilter {
    CIImage * inputGuideImage;
    NSNumber * inputGuidedFilterEpsilon;
    NSData * inputLightMap;
    NSNumber * inputLightMapHeight;
    NSNumber * inputLightMapWidth;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;

@end
