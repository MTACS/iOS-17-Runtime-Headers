
@protocol UIDictationTipRecordingProtocol <NSObject>

@required

- (void)finalizeRecordedText;
- (void)recordDictationTipText:(NSString *)arg1;
- (void)resetHandler;
- (void)startRecodingText:(NSString *)arg1;

@end
