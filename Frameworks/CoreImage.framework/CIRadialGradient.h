
@interface CIRadialGradient : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor0;
    CIColor * inputColor1;
    NSNumber * inputRadius0;
    NSNumber * inputRadius1;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIColor *inputColor0;
@property (nonatomic, retain) CIColor *inputColor1;
@property (nonatomic, retain) NSNumber *inputRadius0;
@property (nonatomic, retain) NSNumber *inputRadius1;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputRadius0;
- (id)inputRadius1;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputRadius0:(id)arg1;
- (void)setInputRadius1:(id)arg1;

@end
