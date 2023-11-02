
@protocol MOVStreamWriterDelegateDeprecationNominates <NSObject>

@optional

- (void)streamWriterDidCancelRecording:(MOVStreamWriter *)arg1;
- (void)streamWriterDidFailWithError:(NSError *)arg1;
- (void)streamWriterDidFinishPreparing;
- (void)streamWriterDidFinishRecording;

@end
