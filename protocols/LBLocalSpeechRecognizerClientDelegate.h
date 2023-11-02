
@protocol LBLocalSpeechRecognizerClientDelegate <NSObject>

@required

- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 didAcceptedEagerResultWithRequestId:(NSString *)arg2 rcId:(unsigned long long)arg3 mitigationSignal:(bool)arg4 featuresToLog:(NSArray *)arg5;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedFinalResultWithRequestId:(NSString *)arg2 speechPackage:(AFSpeechPackage *)arg3;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedPartialResultWithRequestId:(NSString *)arg2 language:(NSString *)arg3 tokens:(NSArray *)arg4;

@optional

- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 didCompletionRecognitionWithStatistics:(NSDictionary *)arg2 requestId:(NSString *)arg3 endpointMode:(long long)arg4 error:(NSError *)arg5;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 didCompletionRecognitionWithStatistics:(NSDictionary *)arg2 requestId:(NSString *)arg3 error:(NSError *)arg4;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedContinuityEndDetected:(SMTContinuityEnd *)arg2;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedEagerRecognitionCandidateWithRequestId:(NSString *)arg2 rcId:(unsigned long long)arg3 speechPackage:(AFSpeechPackage *)arg4 duration:(double)arg5;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedEagerRecognitionCandidateWithRequestId:(NSString *)arg2 rcId:(unsigned long long)arg3 speechPackage:(AFSpeechPackage *)arg4 duration:(double)arg5 metadata:(AFSpeechInfoPackage *)arg6;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedFinalResultCandidateWithRequestId:(NSString *)arg2 speechPackage:(AFSpeechPackage *)arg3;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedFinalResultWithRequestId:(NSString *)arg2 speechPackage:(AFSpeechPackage *)arg3 metadata:(AFSpeechInfoPackage *)arg4;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedPartialResultWithRequestId:(NSString *)arg2 language:(NSString *)arg3 speechPackage:(AFSpeechPackage *)arg4 metadata:(AFSpeechInfoPackage *)arg5;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedPartialResultWithRequestId:(NSString *)arg2 language:(NSString *)arg3 tokens:(NSArray *)arg4 metadata:(AFSpeechInfoPackage *)arg5;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedTCUStateUpdate:(NSDictionary *)arg2;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedTRPCandidatePackage:(SMTTRPCandidate *)arg2;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedTRPDetected:(SMTTRPDetected *)arg2;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedVoiceCommandCandidateWithRequestId:(NSString *)arg2 speechPackage:(AFSpeechPackage *)arg3 metadata:(AFSpeechInfoPackage *)arg4;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 receivedVoiceIdScoreCard:(AFVoiceIdScoreCard *)arg2;
- (void)localSpeechRecognizerClient:(LBLocalSpeechRecognizerClient *)arg1 requestAttentionAssetDownload:(bool)arg2;

@end
