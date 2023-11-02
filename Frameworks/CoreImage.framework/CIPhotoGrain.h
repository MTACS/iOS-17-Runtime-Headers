
@interface CIPhotoGrain : CIFilter {
    NSNumber * inputAmount;
    NSNumber * inputISO;
    CIImage * inputImage;
    NSNumber * inputSeed;
}

@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, copy) NSNumber *inputISO;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputSeed;

+ (id)customAttributes;

- (id)_grainBlendAndMixKernel;
- (id)_interpolateGrainKernel;
- (id)_paddedTileKernel;
- (id)inputAmount;
- (id)inputISO;
- (id)inputImage;
- (id)inputSeed;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputISO:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSeed:(id)arg1;

@end
