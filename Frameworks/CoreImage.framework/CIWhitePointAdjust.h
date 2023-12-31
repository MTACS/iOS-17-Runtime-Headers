
@interface CIWhitePointAdjust : CIFilter {
    CIColor * inputColor;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputColor;
- (id)inputImage;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
