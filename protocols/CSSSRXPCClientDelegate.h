
@protocol CSSSRXPCClientDelegate <NSObject>

@required

- (void)didFinishSpeakerRecognition:(NSDictionary *)arg1;
- (void)didReceiveSpeakerRecognitionScoreCard:(NSDictionary *)arg1;

@end
