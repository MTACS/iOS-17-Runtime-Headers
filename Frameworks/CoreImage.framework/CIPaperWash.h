
@interface CIPaperWash : CIFilter {
    NSNumber * inputGreyscale;
    CIImage * inputImage;
    NSNumber * inputSaturation;
}

@property (nonatomic, copy) NSNumber *inputGreyscale;
@property (nonatomic, copy) NSNumber *inputSaturation;

+ (id)customAttributes;

- (id)inputGreyscale;
- (id)inputSaturation;
- (id)outputImage;
- (void)setInputGreyscale:(id)arg1;
- (void)setInputSaturation:(id)arg1;

@end
