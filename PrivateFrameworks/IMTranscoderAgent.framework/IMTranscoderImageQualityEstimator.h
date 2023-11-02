
@interface IMTranscoderImageQualityEstimator : NSObject

+ (double)_entropyForTranscodedImage:(struct CGImageSource { }*)arg1;
+ (double)getEntropyForImage:(struct CGImage { }*)arg1;
+ (id)getInputImageFeatures:(struct CGImageSource { }*)arg1;
+ (id)imageQualityEstimatorModel;
+ (double)predictQualityFactor:(id)arg1 suggestedMaxLength:(int)arg2;
+ (void)setImageQualityEstimatorModel:(id)arg1;
+ (id)standardizeModelInputFeatures:(id)arg1;

@end
