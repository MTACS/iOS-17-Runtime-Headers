
@interface PXGTungstenEngineRecordingSession : NSObject <PXGTungstenRecordingSession> {
    PXGCompositeTungstenRecordingSession * _rendererRecordingSessions;
}

@property (nonatomic, readonly) bool isStopped;
@property (nonatomic, readonly) NSArray *recordingURLs;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEngine:(id)arg1 directoryURL:(id)arg2;
- (bool)isStopped;
- (id)recordingURLs;
- (void)stop;

@end
