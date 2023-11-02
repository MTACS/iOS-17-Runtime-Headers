
@interface CIColorControls : CIFilter {
    NSNumber * inputBrightness;
    NSNumber * inputContrast;
    CIImage * inputImage;
    NSNumber * inputSaturation;
}

@property (nonatomic, retain) NSNumber *inputBrightness;
@property (nonatomic, retain) NSNumber *inputContrast;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputSaturation;

+ (id)customAttributes;

- (id)inputBrightness;
- (id)inputContrast;
- (id)inputImage;
- (id)inputSaturation;
- (id)outputImage;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSaturation:(id)arg1;

@end
