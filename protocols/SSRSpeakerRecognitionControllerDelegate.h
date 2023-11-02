
@protocol SSRSpeakerRecognitionControllerDelegate <NSObject>

@optional

- (void)speakerRecognitionController:(SSRSpeakerRecognitionController *)arg1 hasSpeakerInfo:(NSDictionary *)arg2;
- (void)speakerRecognitionFinishedProcessing:(SSRSpeakerRecognitionController *)arg1 withFinalSpeakerInfo:(NSDictionary *)arg2;

@end
