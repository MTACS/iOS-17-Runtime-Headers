
@interface CIDisparityRefinementV3 : CIFilter {
    NSNumber * inputDraftMode;
    CIImage * inputImage;
    CIImage * inputMainImage;
    CIImage * inputMatteImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, retain) NSNumber *inputDraftMode;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMainImage;
@property (retain) CIImage *inputMatteImage;
@property (copy) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2;
- (id)inputDraftMode;
- (id)inputImage;
- (id)inputMainImage;
- (id)inputMatteImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMainImage:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
