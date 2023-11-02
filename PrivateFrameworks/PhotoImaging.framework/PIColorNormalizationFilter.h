
@interface PIColorNormalizationFilter : CIFilter {
    CIImage * inputImage;
    PFStoryRecipeDisplayAssetNormalization * inputNormalization;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) PFStoryRecipeDisplayAssetNormalization *inputNormalization;
@property (nonatomic, readonly) PFStoryRecipeDisplayAssetNormalization *outputNormalization;

+ (id)colorCubeForNormalization:(id)arg1 dimension:(long long)arg2 targetColorSpace:(struct CGColorSpace { }*)arg3;
+ (bool)isAnalysisAvailable;
+ (id)logger;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)inputImage;
- (id)inputNormalization;
- (bool)isEqual:(id)arg1;
- (id)outputImage;
- (id)outputNormalization;
- (void)setInputImage:(id)arg1;
- (void)setInputNormalization:(id)arg1;

@end
