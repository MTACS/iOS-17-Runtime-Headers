
@interface CISingleChannelColorMap : CIFilter {
    NSNumber * inputChannelIndex;
    NSNumber * inputColorMapIndex;
    CIImage * inputImage;
    NSNumber * inputShouldNormalize;
}

@property (nonatomic, retain) NSNumber *inputChannelIndex;
@property (nonatomic, retain) NSNumber *inputColorMapIndex;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputShouldNormalize;

+ (id)customAttributes;

- (id)inputChannelIndex;
- (id)inputColorMapIndex;
- (id)inputImage;
- (id)inputShouldNormalize;
- (id)outputImage;
- (void)setInputChannelIndex:(id)arg1;
- (void)setInputColorMapIndex:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputShouldNormalize:(id)arg1;

@end
