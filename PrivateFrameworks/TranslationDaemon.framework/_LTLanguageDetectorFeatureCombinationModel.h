
@interface _LTLanguageDetectorFeatureCombinationModel : NSObject {
    NSMutableArray * _features;
    NSDictionary * _languageLocaleToIdentifier;
    NSNumber * _missingFeatureValueDefault;
    NSNumber * _missingLanguageDetectorDefault;
    MLModel * _mlModel;
    NSString * _modelInput;
    bool  _modelInputIsMatrix;
    NSString * _modelOutput;
}

- (void).cxx_destruct;
- (id)estimateLanguage:(id)arg1 languageDetectionResults:(id)arg2 partialSpeechResultConfidences:(id)arg3 finalSpeechResults:(id)arg4 modelVersions:(id)arg5;
- (id)estimateLanguage:(id)arg1 languageDetectionResults:(id)arg2 partialSpeechResultConfidences:(id)arg3 finalSpeechResults:(id)arg4 modelVersions:(id)arg5 useFinalThresholds:(bool)arg6;
- (id)getAcousticLidConfidenceFromResult:(id)arg1 locale:(id)arg2;
- (id)getModelFeatures:(id)arg1 canonicalPair:(id)arg2 partialSpeechResultConfidences:(id)arg3 finalSpeechResults:(id)arg4 modelVersion:(id)arg5;
- (id)initWithConfig:(id)arg1;

@end
