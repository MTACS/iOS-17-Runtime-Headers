
@interface IPSentenceFeatureExtractor : IPFeatureExtractor

- (id)eventIdentifierForLanguageID:(id)arg1;
- (id)featureSentencesFromText:(id)arg1 dataDetectedFeatures:(id)arg2 languageID:(id)arg3;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (void)identifyAndStorePolarityInFeatureSentences:(id)arg1 eventIdentifier:(id)arg2 previousFeatureSentences:(id)arg3;
- (id)queue;
- (unsigned long long)responseKitAnnotationTypeForFeatureDataType:(unsigned long long)arg1;

@end
