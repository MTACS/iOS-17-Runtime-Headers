
@interface NewsUI2.ANFLongreadScrollTestCase : NSObject <SNTestCaseScroll> {
    void aggregate;
    void iterations;
    void numberOfScreens;
    void offset;
    void testName;
    void timeoutInSeconds;
}

@property (nonatomic, readonly) unsigned long long aggregate;
@property (nonatomic, readonly) long long iterations;
@property (nonatomic, readonly) long long numberOfScreens;
@property (nonatomic, readonly) long long offset;
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) double timeoutInSeconds;

- (void).cxx_destruct;
- (unsigned long long)aggregate;
- (id)init;
- (long long)iterations;
- (long long)numberOfScreens;
- (long long)offset;
- (id)scrollViewWithContext:(id)arg1;
- (id)testName;
- (double)timeoutInSeconds;

@end
