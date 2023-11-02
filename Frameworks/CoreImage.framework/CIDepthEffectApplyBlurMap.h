
@interface CIDepthEffectApplyBlurMap : CIFilter {
    NSNumber * inputAperture;
    id  inputAuxDataMetadata;
    NSNumber * inputBestHairQuality;
    CIImage * inputBlurMap;
    NSString * inputCaptureFolderMiscPath;
    NSNumber * inputDraftMode;
    CIImage * inputGainMap;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseScale;
    CIImage * inputMatteImage;
    NSNumber * inputScale;
    NSString * inputShape;
}

@property (nonatomic, copy) NSNumber *inputAperture;
@property (nonatomic, retain) id inputAuxDataMetadata;
@property (nonatomic, retain) NSNumber *inputBestHairQuality;
@property (retain) CIImage *inputBlurMap;
@property (nonatomic, retain) NSString *inputCaptureFolderMiscPath;
@property (nonatomic, retain) NSNumber *inputDraftMode;
@property (retain) CIImage *inputGainMap;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseScale;
@property (retain) CIImage *inputMatteImage;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSString *inputShape;

+ (id)customAttributes;

- (id)alterBlurmap;
- (id)inputAperture;
- (id)inputAuxDataMetadata;
- (id)inputBestHairQuality;
- (id)inputBlurMap;
- (id)inputCaptureFolderMiscPath;
- (id)inputDraftMode;
- (id)inputGainMap;
- (id)inputImage;
- (id)inputLumaNoiseScale;
- (id)inputMatteImage;
- (id)inputScale;
- (id)inputShape;
- (id)outputImage;
- (void)setInputAperture:(id)arg1;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputBestHairQuality:(id)arg1;
- (void)setInputBlurMap:(id)arg1;
- (void)setInputCaptureFolderMiscPath:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputGainMap:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShape:(id)arg1;
- (id)unifiedRenderingOutputImage:(struct CGImageMetadata { }*)arg1;

@end
