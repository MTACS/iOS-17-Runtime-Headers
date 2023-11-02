
@interface CIRippleTransition : CIFilter {
    CIVector * inputCenter;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputScale;
    CIImage * inputShadingImage;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputShadingImage;
@property (nonatomic, retain) CIImage *inputTargetImage;

+ (id)customAttributes;

- (id)_CIRippleTransition;
- (id)inputImage;
- (id)inputShadingImage;
- (id)inputTargetImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputShadingImage:(id)arg1;
- (void)setInputTargetImage:(id)arg1;

@end
