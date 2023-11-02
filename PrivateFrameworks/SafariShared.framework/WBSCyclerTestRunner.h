
@interface WBSCyclerTestRunner : NSObject {
    NSMutableArray * _pendingRequestCompletionHandlerQueue;
    NSMutableArray * _pendingRequestQueue;
    bool  _running;
    bool  _stopRequested;
    <WBSCyclerTestTarget> * _target;
    <WBSCyclerTestSuite> * _testSuite;
}

@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly) <WBSCyclerTestTarget> *target;
@property (nonatomic, readonly) <WBSCyclerTestSuite> *testSuite;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_handleNextPendingRequestWithCompletionHandler:(id /* block */)arg1;
- (void)_performNextIterationWithCompletionHandler:(id /* block */)arg1;
- (void)_stop;
- (void)dealloc;
- (void)handleRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithTestSuite:(id)arg1 target:(id)arg2;
- (bool)isRunning;
- (void)requestStop;
- (void)runWithCompletionHandler:(id /* block */)arg1;
- (id)target;
- (id)testSuite;

@end
