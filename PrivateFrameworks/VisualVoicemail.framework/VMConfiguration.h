
@interface VMConfiguration : NSObject

+ (float)confidenceLowQualityThreshold;
+ (id)confidenceLowQualityThresholdFromAsset;
+ (float)confidenceSegmentThreshold;
+ (id)confidenceSegmentThresholdFromAsset;
+ (float)confidenceThreshold;
+ (id)confidenceThresholdFromAsset;
+ (id)confidenceThresholdFromAssetForKey:(id)arg1;
+ (id)confidenceThresholdFromDefaultsForKey:(id)arg1;
+ (id)localeForTranscriptionLanguage;
+ (id)metadataDictionaryForSpeechAssetWithLanguage:(id)arg1;

@end
