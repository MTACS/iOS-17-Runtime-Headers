
@interface CISmoothLinearGradient : CIFilter {
    CIColor * inputColor0;
    CIColor * inputColor1;
    CIVector * inputPoint0;
    CIVector * inputPoint1;
}

@property (nonatomic, retain) CIColor *inputColor0;
@property (nonatomic, retain) CIColor *inputColor1;
@property (nonatomic, retain) CIVector *inputPoint0;
@property (nonatomic, retain) CIVector *inputPoint1;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputPoint0;
- (id)inputPoint1;
- (id)outputImage;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputPoint0:(id)arg1;
- (void)setInputPoint1:(id)arg1;

@end
