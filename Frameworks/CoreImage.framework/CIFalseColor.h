
@interface CIFalseColor : CIFilter {
    CIColor * inputColor0;
    CIColor * inputColor1;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIColor *inputColor0;
@property (nonatomic, retain) CIColor *inputColor1;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputImage;
- (id)outputImage;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
