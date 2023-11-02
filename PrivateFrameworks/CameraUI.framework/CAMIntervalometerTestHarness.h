
@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMCaptureRequestIntervalometerDelegate, CAMStillImageCaptureRequestDelegate> {
    CUCaptureController * _captureController;
    double  _delayBetweenCaptures;
    unsigned long long  _expectedNumberOfResponsesPerRequest;
    NSString * _finalRequestPersistenceUUID;
    double  _lastCaptureCompletionTime;
    long long  _mode;
    NSMutableDictionary * _numberOfResponsesForRequest;
    bool  _performWarmupCapture;
    CAMCaptureRequestIntervalometer * _testIntervalometer;
    bool  _waitingOnWarmupCapture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMCaptureRequestIntervalometer *testIntervalometer;

- (void).cxx_destruct;
- (bool)_allowOverlappingCaptures;
- (bool)_hasReceivedExpectedNumberOfResponsesForPersistenceUUID:(id)arg1 failureReason:(id*)arg2;
- (bool)_hasReceivedExpectedNumberOfResponsesForRequestsWithFailureReason:(id*)arg1;
- (bool)_shouldDelayBeforeCapturing;
- (void)failedTestWithReason:(id)arg1;
- (id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(unsigned long long)arg2 captureController:(id)arg3 performingWarmupCapture:(bool)arg4 forCaptureMode:(long long)arg5 delayBetweenCaptures:(double)arg6;
- (bool)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)intervalometer:(id)arg1 didReachMaximumCountWithRequest:(id)arg2;
- (void)setTestIntervalometer:(id)arg1;
- (void)startTesting;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
- (void)stopTesting;
- (id)testIntervalometer;

@end
