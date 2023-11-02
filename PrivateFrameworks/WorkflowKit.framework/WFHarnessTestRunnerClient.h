
@interface WFHarnessTestRunnerClient : WFWorkflowRunnerClient {
    <WFHarnessTestRunnerClientDelegate> * _testDelegate;
}

@property (nonatomic) <WFHarnessTestRunnerClientDelegate> *testDelegate;

- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRunRequest:(id)arg1;
- (void)setTestDelegate:(id)arg1;
- (id)testDelegate;

@end
