
@interface SLASRFeatureExtractor : NSObject

+ (id)_getLastTokenForPath:(id)arg1 fromPhrases:(id)arg2;
+ (id)_getTokenConfidenceForPath:(id)arg1 fromPhrases:(id)arg2;
+ (id)extractASRFaturesFrom:(id)arg1;
+ (id)extractLRNNFaturesFrom:(id)arg1;
+ (id)getBestSpeechRecognitionTextFromPackage:(id)arg1;

@end
