
@interface WFHarnessTestRunResult : WFWorkflowRunResult {
    WFHarnessTestResult * _testResult;
}

@property (nonatomic, readonly) WFHarnessTestResult *testResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTestResult:(id)arg1;
- (id)testResult;

@end
