
@protocol LBLocalSpeechServiceDelegate <NSObject>

@required

- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(NSDictionary *)arg1 requestId:(NSString *)arg2 endpointMode:(long long)arg3 error:(NSError *)arg4;
- (oneway void)localSpeechServiceDidDetectedFinalEndpoint;
- (oneway void)localSpeechServiceDidReceiveContinuityEndDetected:(SMTContinuityEnd *)arg1;
- (oneway void)localSpeechServiceDidReceiveTCUStateUpdate:(NSDictionary *)arg1;
- (oneway void)localSpeechServiceDidReceiveTRPCandidatePackage:(SMTTRPCandidate *)arg1;
- (oneway void)localSpeechServiceDidReceiveTRPDetected:(SMTTRPDetected *)arg1;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(NSString *)arg1 rcId:(unsigned long long)arg2 speechPackage:(AFSpeechPackage *)arg3 duration:(double)arg4;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(NSString *)arg1 rcId:(unsigned long long)arg2 speechPackage:(AFSpeechPackage *)arg3 duration:(double)arg4 metadata:(AFSpeechInfoPackage *)arg5;
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(NSString *)arg1 rcId:(unsigned long long)arg2 shouldAccept:(bool)arg3 mitigationSignal:(bool)arg4 featuresToLog:(NSArray *)arg5;
- (oneway void)localSpeechServiceDidReceivedFinalResultCandidateWithRequestId:(NSString *)arg1 speechPackage:(AFSpeechPackage *)arg2;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(NSString *)arg1 speechPackage:(AFSpeechPackage *)arg2;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(NSString *)arg1 speechPackage:(AFSpeechPackage *)arg2 metadata:(AFSpeechInfoPackage *)arg3;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(NSString *)arg1 language:(NSString *)arg2 speechPackage:(AFSpeechPackage *)arg3 metadata:(AFSpeechInfoPackage *)arg4;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(NSString *)arg1 language:(NSString *)arg2 tokens:(NSArray *)arg3;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(NSString *)arg1 language:(NSString *)arg2 tokens:(NSArray *)arg3 metadata:(AFSpeechInfoPackage *)arg4;
- (oneway void)localSpeechServiceDidReceivedVoiceCommandCandidateWithRequestId:(NSString *)arg1 speechPackage:(AFSpeechPackage *)arg2 metadata:(AFSpeechInfoPackage *)arg3;
- (oneway void)localSpeechServiceDidReceivedVoiceIdScoreCard:(AFVoiceIdScoreCard *)arg1;
- (oneway void)localSpeechServiceRequestAttentionAssetDownload;

@end
