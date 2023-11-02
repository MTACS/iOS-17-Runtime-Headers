
@interface CIDepthBlurEffect : CIFilter {
    NSNumber * inputAperture;
    id  inputAuxDataMetadata;
    AVCameraCalibrationData * inputCalibrationData;
    CIVector * inputChinPositions;
    CIImage * inputDisparityImage;
    CIVector * inputFocusRect;
    CIImage * inputGainMap;
    CIImage * inputGlassesImage;
    CIImage * inputHairImage;
    CIImage * inputImage;
    CIVector * inputLeftEyePositions;
    NSNumber * inputLumaNoiseScale;
    CIImage * inputMatteImage;
    CIVector * inputNosePositions;
    CIVector * inputRightEyePositions;
    NSNumber * inputScaleFactor;
    NSString * inputShape;
}

@property (nonatomic, retain) NSNumber *inputAperture;
@property (nonatomic, retain) id inputAuxDataMetadata;
@property (nonatomic, retain) AVCameraCalibrationData *inputCalibrationData;
@property (retain) CIVector *inputChinPositions;
@property (retain) CIImage *inputDisparityImage;
@property (nonatomic, retain) CIVector *inputFocusRect;
@property (retain) CIImage *inputGainMap;
@property (retain) CIImage *inputGlassesImage;
@property (retain) CIImage *inputHairImage;
@property (retain) CIImage *inputImage;
@property (retain) CIVector *inputLeftEyePositions;
@property (nonatomic, retain) NSNumber *inputLumaNoiseScale;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIVector *inputNosePositions;
@property (retain) CIVector *inputRightEyePositions;
@property (nonatomic, retain) NSNumber *inputScaleFactor;
@property (nonatomic, retain) NSString *inputShape;

+ (struct CGImageMetadata { }*)augmentMetadataWithRenderingPropertiesForImage:(id)arg1;
+ (id)customAttributes;
+ (int)getDraftMode:(id)arg1;
+ (struct CGImageMetadata { }*)metadataFromDictionary:(id)arg1 metadata:(struct CGImageMetadata { }*)arg2;
+ (struct CGImageMetadata { }*)replaceRenderingParameters:(struct CGImageMetadata { }*)arg1 tuningParameters:(id)arg2;
+ (id)tuningParametersFromMetadata:(struct CGImageMetadata { }*)arg1;

- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;
- (id)inputAperture;
- (id)inputAuxDataMetadata;
- (id)inputCalibrationData;
- (id)inputChinPositions;
- (id)inputDisparityImage;
- (id)inputFocusRect;
- (id)inputGainMap;
- (id)inputGlassesImage;
- (id)inputHairImage;
- (id)inputImage;
- (id)inputLeftEyePositions;
- (id)inputLumaNoiseScale;
- (id)inputMatteImage;
- (id)inputNosePositions;
- (id)inputRightEyePositions;
- (id)inputScaleFactor;
- (id)inputShape;
- (id)outputImage;
- (void)prewarm:(id)arg1;
- (void)setInputAperture:(id)arg1;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputChinPositions:(id)arg1;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputGainMap:(id)arg1;
- (void)setInputGlassesImage:(id)arg1;
- (void)setInputHairImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLeftEyePositions:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputNosePositions:(id)arg1;
- (void)setInputRightEyePositions:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setInputShape:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
