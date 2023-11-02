
@protocol SSRSpeakerAnalyzerPSRDelegate <NSObject>

@optional

- (void)voiceRecognitionPSRAnalyzer:(SSRSpeakerAnalyzerPSR *)arg1 hasVoiceRecognitionInfo:(NSDictionary *)arg2;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(SSRSpeakerAnalyzerPSR *)arg1 withVoiceRecognitionInfo:(NSDictionary *)arg2;

@end
