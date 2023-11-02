
@interface CICheckerboardGenerator : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor0;
    CIColor * inputColor1;
    NSNumber * inputSharpness;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIColor *inputColor0;
@property (nonatomic, retain) CIColor *inputColor1;
@property (nonatomic, retain) NSNumber *inputSharpness;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputSharpness;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
