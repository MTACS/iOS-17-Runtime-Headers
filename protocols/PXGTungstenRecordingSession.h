
@protocol PXGTungstenRecordingSession

@required

- (bool)isStopped;
- (NSArray *)recordingURLs;
- (void)stop;

@end
