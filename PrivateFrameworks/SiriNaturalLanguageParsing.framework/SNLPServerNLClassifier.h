
@interface SNLPServerNLClassifier : SNLPITFMClassifier

+ (id)_classifierWithModelURL:(id)arg1 configURL:(id)arg2 spanVocabularyURL:(id)arg3 contextVocabularyURL:(id)arg4 versionURL:(id)arg5 error:(id*)arg6;
+ (id)_convertITFMResponse:(id)arg1;
+ (id)_convertSNLCRequest:(id)arg1;
+ (id /* block */)_initializationBlock;
+ (id)classifierWithPathURL:(id)arg1 error:(id*)arg2;

- (id)inferenceResponseForRequest:(id)arg1;
- (id)inferenceResponseForRequest:(id)arg1 error:(id*)arg2;
- (id)responseForRequest:(id)arg1 error:(id*)arg2;

@end
