
@interface CIConstantColorGenerator : CIFilter {
    CIColor * inputColor;
}

@property (nonatomic, retain) CIColor *inputColor;

+ (id)customAttributes;

- (id)inputColor;
- (id)outputImage;
- (void)setInputColor:(id)arg1;

@end
