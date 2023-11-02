
@interface _TtCC6Speech32EARSpeechRecognitionResultStream8XPCProxy : NSObject <_SFXPCEARSpeechRecognitionResultStream> {
    void enqueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)speechRecognizerDidFinishRecognitionWithError:(id)arg1;
- (void)speechRecognizerDidProcessAudioDuration:(double)arg1;
- (void)speechRecognizerDidProduceEndpointFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 processedAudioDurationInMilliseconds:(long long)arg6;
- (void)speechRecognizerDidProduceLoggablePackage:(id)arg1;
- (void)speechRecognizerDidRecognizeFinalResultCandidatePackage:(id)arg1;
- (void)speechRecognizerDidRecognizeFinalResultPackage:(id)arg1;
- (void)speechRecognizerDidRecognizePartialResultNbest:(id)arg1;

@end
