
@interface SYBacklinkMonitor : NSObject <SYBacklinkMonitorOperationDelegate> {
    SYBacklinkMonitorOperation * __activeOperation;
    id /* block */  __delayedChangeEvaluationBlock;
    NSDate * __lastOperationStartTime;
    NSObject<OS_dispatch_queue> * __monitorQueue;
    bool  __needsActivityUpdate;
    <SYBacklinkMonitorDelegate> * _delegate;
    <SYBacklinkMonitorTestingDelegate> * _testingDelegate;
    double  _testingOperationCoalescingInterval;
}

@property (nonatomic, retain) SYBacklinkMonitorOperation *_activeOperation;
@property (nonatomic, copy) id /* block */ _delayedChangeEvaluationBlock;
@property (nonatomic, retain) NSDate *_lastOperationStartTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_monitorQueue;
@property (nonatomic) bool _needsActivityUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SYBacklinkMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <SYBacklinkMonitorTestingDelegate> *testingDelegate;
@property (nonatomic) double testingOperationCoalescingInterval;

- (void).cxx_destruct;
- (id)_activeOperation;
- (void)_beginNewOperation;
- (id /* block */)_delayedChangeEvaluationBlock;
- (void)_evaluatePendingRequests;
- (id)_lastOperationStartTime;
- (id)_monitorQueue;
- (bool)_needsActivityUpdate;
- (void)backlinkMonitorOperationDidFinish:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setTestingDelegate:(id)arg1;
- (void)setTestingOperationCoalescingInterval:(double)arg1;
- (void)set_activeOperation:(id)arg1;
- (void)set_delayedChangeEvaluationBlock:(id /* block */)arg1;
- (void)set_lastOperationStartTime:(id)arg1;
- (void)set_needsActivityUpdate:(bool)arg1;
- (id)testingDelegate;
- (double)testingOperationCoalescingInterval;
- (void)userActivityDidChange;

@end
