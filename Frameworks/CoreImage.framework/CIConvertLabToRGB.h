
@interface CIConvertLabToRGB : CIFilter {
    CIImage * inputImage;
    NSNumber * inputNormalize;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputNormalize;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputNormalize;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputNormalize:(id)arg1;

@end
