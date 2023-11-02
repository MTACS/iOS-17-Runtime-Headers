
@interface PIRadialGradient : CIFilter {
    CIVector * _inputCenter;
    CIColor * _inputColor0;
    CIColor * _inputColor1;
    CIVector * _inputPoint0;
    CIVector * _inputPoint1;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIColor *inputColor0;
@property (nonatomic, retain) CIColor *inputColor1;
@property (nonatomic, retain) CIVector *inputPoint0;
@property (nonatomic, retain) CIVector *inputPoint1;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)inputCenter;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputPoint0;
- (id)inputPoint1;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputPoint0:(id)arg1;
- (void)setInputPoint1:(id)arg1;

@end
