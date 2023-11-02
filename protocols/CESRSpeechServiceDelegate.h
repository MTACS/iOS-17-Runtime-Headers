
@protocol CESRSpeechServiceDelegate <NSObject>

@required

- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(NSDictionary *)arg1 error:(NSError *)arg2;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidProduceEndpointFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(NSArray *)arg4 silencePosterior:(double)arg5 processedAudioDurationInMilliseconds:(long long)arg6;
- (oneway void)speechServiceDidRecognizePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(AFSpeechRecognition *)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1;
- (oneway void)speechServiceDidSelectRecognitionModelWithModelProperties:(CESRModelProperties *)arg1;

@optional

- (oneway void)speechServiceDidProduceLoggablePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizeFinalResultCandidatePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizePackage:(AFSpeechPackage *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;
- (oneway void)speechServiceDidRecognizePartialPackage:(AFSpeechPackage *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;
- (oneway void)speechServiceDidRecognizeVoiceCommandCandidatePackage:(AFSpeechPackage *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;

@end
