
@interface CUIOuterBevelEmbossFilter : CIFilter {
    NSNumber * inputAngle;
    CIColor * inputHighlightColor;
    CIImage * inputImage;
    CIColor * inputShadowColor;
    NSNumber * inputSize;
    NSNumber * inputSoften;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIColor *inputHighlightColor;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIColor *inputShadowColor;
@property (nonatomic, retain) NSNumber *inputSize;
@property (nonatomic, retain) NSNumber *inputSoften;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelC;
- (id)inputAngle;
- (id)inputHighlightColor;
- (id)inputImage;
- (id)inputShadowColor;
- (id)inputSize;
- (id)inputSoften;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputHighlightColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputShadowColor:(id)arg1;
- (void)setInputSize:(id)arg1;
- (void)setInputSoften:(id)arg1;

@end
