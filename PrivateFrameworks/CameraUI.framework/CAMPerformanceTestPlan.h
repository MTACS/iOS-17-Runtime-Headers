
@interface CAMPerformanceTestPlan : NSObject <CAMPerformanceTestHarnessDelegate> {
    unsigned long long  __completedHarnesses;
    NSMutableArray * __harnesses;
    bool  __hasTriggeredTestStart;
    unsigned long long  __startedHarnesses;
    id /* block */  _completionHandler;
    bool  _runningTest;
    unsigned int  _settlingDelaySeconds;
    id /* block */  _startHandler;
    NSString * _testName;
}

@property (nonatomic) unsigned long long _completedHarnesses;
@property (nonatomic, retain) NSMutableArray *_harnesses;
@property (nonatomic) bool _hasTriggeredTestStart;
@property (nonatomic) unsigned long long _startedHarnesses;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRunningTest, nonatomic, readonly) bool runningTest;
@property (nonatomic) unsigned int settlingDelaySeconds;
@property (nonatomic, copy) id /* block */ startHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *testName;

- (void).cxx_destruct;
- (unsigned long long)_completedHarnesses;
- (void)_failedTestWithReason:(id)arg1;
- (id)_findHarnessAfter:(id)arg1;
- (id)_harnesses;
- (bool)_hasTriggeredTestStart;
- (void)_runHarnessAfter:(id)arg1;
- (void)_startTesting;
- (unsigned long long)_startedHarnesses;
- (void)_stopTesting;
- (id /* block */)completionHandler;
- (void)didFailTestHarness:(id)arg1 withReason:(id)arg2;
- (void)didStartSubtest:(id)arg1 withName:(id)arg2 withMetrics:(id)arg3;
- (void)didStopSubtest:(id)arg1 withName:(id)arg2;
- (id)initWithTestName:(id)arg1;
- (bool)isRunningTest;
- (void)queueHarness:(id)arg1;
- (void)run;
- (void)runHarness:(id)arg1;
- (void)runWithSecondsDelay:(unsigned long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setSettlingDelaySeconds:(unsigned int)arg1;
- (void)setStartHandler:(id /* block */)arg1;
- (void)set_completedHarnesses:(unsigned long long)arg1;
- (void)set_harnesses:(id)arg1;
- (void)set_hasTriggeredTestStart:(bool)arg1;
- (void)set_startedHarnesses:(unsigned long long)arg1;
- (unsigned int)settlingDelaySeconds;
- (id /* block */)startHandler;
- (void)startSubtestWithName:(id)arg1 withMetrics:(id)arg2;
- (void)stopSubtestWithName:(id)arg1;
- (id)testName;
- (void)willEndTestHarness:(id)arg1;
- (void)willStartTestHarness:(id)arg1;

@end
