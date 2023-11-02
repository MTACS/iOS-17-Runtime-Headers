
@protocol RecordingManagerDelegate <NSObject>

@optional

- (void)didFinishRecording;
- (void)isReadyToRecord;

@end
