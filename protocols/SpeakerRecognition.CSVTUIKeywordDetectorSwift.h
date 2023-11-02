
@protocol SpeakerRecognition.CSVTUIKeywordDetectorSwift

@required

- (NSDictionary *)analyzeWithBuffer:(NSData *)arg1;
- (id)initWithAsset:(CSAsset *)arg1;
- (void)reset;
- (NSData *)triggeredUtteranceWithVoiceTriggerEventInfo:(NSDictionary *)arg1;

@end
