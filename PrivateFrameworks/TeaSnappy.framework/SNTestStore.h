
@interface SNTestStore : NSObject <SNTestRunFactory> {
    <SNTestCase> * _extendedLaunchTest;
    NSMutableDictionary * _testCases;
    NSMutableArray * _testSuites;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SNTestCase> *extendedLaunchTest;
@property (nonatomic, readonly) SNTestRun *extendedLaunchTestRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *testCases;
@property (nonatomic, readonly) NSMutableArray *testSuites;

- (void).cxx_destruct;
- (void)addTestCase:(id)arg1;
- (void)addTestSuite:(id)arg1;
- (id)extendedLaunchTest;
- (id)extendedLaunchTestRun;
- (id)init;
- (void)setExtendedLaunchTest:(id)arg1;
- (id)testCases;
- (id)testRunForTestName:(id)arg1;
- (id)testSuites;

@end
