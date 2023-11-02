
@protocol _SFXPCEARSpeechRecognitionResultStream

@required

- (void)speechRecognizerDidFinishRecognitionWithError:(NSError *)arg1;
- (void)speechRecognizerDidProcessAudioDuration:(double)arg1;
- (void)speechRecognizerDidProduceEndpointFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(NSArray *)arg4 silencePosterior:(double)arg5 processedAudioDurationInMilliseconds:(long long)arg6;
- (void)speechRecognizerDidProduceLoggablePackage:(EARSpeechRecognitionResultPackage *)arg1;
- (void)speechRecognizerDidRecognizeFinalResultCandidatePackage:(EARSpeechRecognitionResultPackage *)arg1;
- (void)speechRecognizerDidRecognizeFinalResultPackage:(EARSpeechRecognitionResultPackage *)arg1;
- (void)speechRecognizerDidRecognizePartialResultNbest:(NSArray *)arg1;

@end
