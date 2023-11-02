
@protocol ARRecordingTechniqueDelegate <NSObject>

@required

- (void)technique:(id <ARRecordingTechniqueProtocol>)arg1 didFinishWithResult:(NSError *)arg2;

@optional

- (void)recordingTechniqueDidBecomeReady:(id <ARRecordingTechniqueProtocol>)arg1;

@end
