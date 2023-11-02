
@interface CAMPerformanceTestHarness : NSObject {
    id /* block */  _completionHandler;
    <CAMPerformanceTestHarnessDelegate> * _delegate;
    bool  _isSetupHarness;
    bool  _runningTest;
    id /* block */  _startHandler;
    NSString * _testName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <CAMPerformanceTestHarnessDelegate> *delegate;
@property (nonatomic) bool isSetupHarness;
@property (getter=isRunningTest, nonatomic) bool runningTest;
@property (nonatomic, copy) id /* block */ startHandler;
@property (nonatomic, readonly, copy) NSString *testName;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)delegate;
- (void)failedTestWithReason:(id)arg1;
- (id)initWithTestName:(id)arg1;
- (bool)isRunningTest;
- (bool)isSetupHarness;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsSetupHarness:(bool)arg1;
- (void)setRunningTest:(bool)arg1;
- (void)setStartHandler:(id /* block */)arg1;
- (id /* block */)startHandler;
- (void)startSubtestWithName:(id)arg1;
- (void)startSubtestWithName:(id)arg1 withMetrics:(id)arg2;
- (void)startTesting;
- (void)stopSubtestWithName:(id)arg1;
- (void)stopTesting;
- (id)testName;

@end
