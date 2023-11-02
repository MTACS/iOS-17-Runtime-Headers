
@interface PXGCompositeTungstenRecordingSession : NSObject <PXGTungstenRecordingSession> {
    NSArray * _recordingSessions;
    NSArray * _recordingURLs;
}

@property (nonatomic, readonly) bool isStopped;
@property (nonatomic, readonly) NSArray *recordingURLs;

- (void).cxx_destruct;
- (id)initWithRecordingSessions:(id)arg1;
- (bool)isStopped;
- (id)recordingURLs;
- (void)stop;

@end
