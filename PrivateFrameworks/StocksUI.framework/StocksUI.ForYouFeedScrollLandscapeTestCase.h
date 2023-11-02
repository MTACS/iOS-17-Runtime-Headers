
@interface StocksUI.ForYouFeedScrollLandscapeTestCase : NSObject <SNTestCaseScroll, SNTestRunOptions> {
    void aggregate;
    void iterations;
    void numberOfScreens;
    void offset;
    void orientation;
    void requiredCapabilities;
    void testName;
    void timeoutInSeconds;
    void waitForCommitToFinish;
}

@property (nonatomic, readonly) unsigned long long aggregate;
@property (nonatomic, readonly) long long iterations;
@property (nonatomic, readonly) long long numberOfScreens;
@property (nonatomic, readonly) long long offset;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) double timeoutInSeconds;
@property (nonatomic, readonly) bool waitForCommitToFinish;

- (void).cxx_destruct;
- (unsigned long long)aggregate;
- (id)init;
- (long long)iterations;
- (long long)numberOfScreens;
- (long long)offset;
- (long long)orientation;
- (id)requiredCapabilities;
- (id)scrollViewWithContext:(id)arg1;
- (id)testName;
- (double)timeoutInSeconds;
- (bool)waitForCommitToFinish;

@end
