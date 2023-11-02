
@interface NewsUI2.ExtendedLaunchToArticleTestCase : NSObject <SNTestCaseRun> {
    void aggregate;
    void articleLoadingStateMachine;
    void testName;
    void timeoutInSeconds;
}

@property (nonatomic, readonly) unsigned long long aggregate;
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) double timeoutInSeconds;

- (void).cxx_destruct;
- (unsigned long long)aggregate;
- (id)init;
- (void)runTestWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)testName;
- (double)timeoutInSeconds;

@end
