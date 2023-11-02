
@interface WFHarnessTestRunRequest : WFWorkflowRunRequest {
    WFHarnessTestRunDescriptor * _testRunDescriptor;
}

@property (nonatomic, readonly) WFHarnessTestRunDescriptor *testRunDescriptor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)getInputWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTestBundleURL:(id)arg1 xcTestClass:(id)arg2 testIdentifier:(id)arg3 automationType:(id)arg4;
- (id)testRunDescriptor;

@end
