
@protocol SSRSpeakerRecognizerDelegate <NSObject>

@required

- (void)speakerRecognizer:(id <SSRSpeakerRecognizer>)arg1 hasSpeakerIdInfo:(NSDictionary *)arg2;
- (void)speakerRecognizerFinishedProcessing:(id <SSRSpeakerRecognizer>)arg1 withFinalSpeakerIdInfo:(NSDictionary *)arg2;

@end
