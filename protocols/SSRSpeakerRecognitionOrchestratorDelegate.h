
@protocol SSRSpeakerRecognitionOrchestratorDelegate <NSObject>

@required

- (void)voiceRecognitionOrchestrator:(SSRSpeakerRecognitionOrchestrator *)arg1 hasVoiceRecognitionInfo:(NSDictionary *)arg2;
- (void)voiceRecognitionOrchestratorFinishedProcessing:(SSRSpeakerRecognitionOrchestrator *)arg1 withFinalVoiceRecognitionInfo:(NSDictionary *)arg2;

@end
