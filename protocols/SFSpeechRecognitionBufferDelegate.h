
@protocol SFSpeechRecognitionBufferDelegate <NSObject>

@required

- (void)addRecordedSpeechSampleData:(NSData *)arg1;
- (void)stopSpeech;

@end
