
@interface SNTestRun : NSObject <SNTestRunOptions> {
    <SNTestCase> * _testCase;
    SNTestSuite * _testSuite;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long orientation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SNTestCase> *testCase;
@property (nonatomic, readonly) SNTestSuite *testSuite;
@property (nonatomic, readonly) bool waitForCommitToFinish;

- (void).cxx_destruct;
- (id)initWithTestCase:(id)arg1 testSuite:(id)arg2;
- (long long)orientation;
- (void)runTestWithContext:(id)arg1 testCoordinator:(id)arg2 completion:(id /* block */)arg3;
- (void)runTestWithContext:(id)arg1 testName:(id)arg2 testCoordinator:(id)arg3 completion:(id /* block */)arg4;
- (void)setupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)testCase;
- (id)testSuite;
- (bool)waitForCommitToFinish;

@end
