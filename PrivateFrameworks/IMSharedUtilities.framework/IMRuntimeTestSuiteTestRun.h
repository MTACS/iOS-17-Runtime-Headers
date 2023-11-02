
@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {
    NSArray * _testRun;
    NSMutableArray * _testRuns;
}

@property (readonly, copy) NSArray *testRuns;

- (void).cxx_destruct;
- (void)addTestRun:(id)arg1;
- (id)init;
- (id)testRuns;

@end
