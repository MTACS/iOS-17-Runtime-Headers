
@interface CIPageCurlWithShadowTransition : CIFilter {
    NSNumber * inputAngle;
    CIImage * inputBacksideImage;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputShadowAmount;
    CIVector * inputShadowExtent;
    NSNumber * inputShadowSize;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (nonatomic, retain) CIImage *inputBacksideImage;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputTargetImage;

+ (id)customAttributes;

- (id)_CIPageCurlNoShadowTransition;
- (id)_CIPageCurlWithShadowTransition;
- (id)inputBacksideImage;
- (id)inputImage;
- (id)inputTargetImage;
- (id)outputImage;
- (void)setInputBacksideImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputTargetImage:(id)arg1;

@end
