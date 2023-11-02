
@interface CIBlurredRectangleGenerator : CIFilter {
    CIColor * inputColor;
    CIVector * inputExtent;
    NSNumber * inputSigma;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) NSNumber *inputSigma;

+ (id)customAttributes;

- (id)inputColor;
- (id)inputExtent;
- (id)inputSigma;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputSigma:(id)arg1;

@end
