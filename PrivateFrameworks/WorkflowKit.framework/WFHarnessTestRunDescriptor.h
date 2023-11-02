
@interface WFHarnessTestRunDescriptor : WFWorkflowRunDescriptor {
    bool  _holdingSecurityScopedAccess;
    NSURL * _testBundleURL;
    WFHarnessTestCase * _testCase;
    NSString * _testIdentifier;
    NSURL * _testRunnerURL;
    NSString * _xcTestClass;
}

@property (nonatomic, readonly) bool holdingSecurityScopedAccess;
@property (nonatomic, readonly) NSURL *testBundleURL;
@property (nonatomic, retain) WFHarnessTestCase *testCase;
@property (nonatomic, readonly, copy) NSString *testIdentifier;
@property (nonatomic, readonly) NSURL *testRunnerURL;
@property (nonatomic, readonly, copy) NSString *xcTestClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)holdingSecurityScopedAccess;
- (id)initWithCoder:(id)arg1;
- (id)initWithTestBundleURL:(id)arg1 testRunnerURL:(id)arg2 xcTestClass:(id)arg3 testIdentifier:(id)arg4;
- (id)initWithTestBundleURL:(id)arg1 xcTestClass:(id)arg2 testIdentifier:(id)arg3;
- (id)loadTestCaseWithError:(id*)arg1;
- (void)setTestCase:(id)arg1;
- (id)testBundleURL;
- (id)testCase;
- (id)testIdentifier;
- (id)testRunnerURL;
- (id)xcTestClass;

@end
