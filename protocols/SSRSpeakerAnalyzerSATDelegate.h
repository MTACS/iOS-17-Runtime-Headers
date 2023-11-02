
@protocol SSRSpeakerAnalyzerSATDelegate <NSObject>

@optional

- (void)voiceRecognitionSATAnalyzer:(SSRSpeakerAnalyzerSAT *)arg1 hasVoiceRecognitionInfo:(NSDictionary *)arg2;
- (void)voiceRecognitionSATAnalyzerFinishedProcessing:(SSRSpeakerAnalyzerSAT *)arg1 withVoiceRecognitionInfo:(NSDictionary *)arg2;

@end
