
@interface StocksUI.StockFeedRotateTestCase : NSObject <SNTestCaseRotate> {
    void aggregate;
    void requiredCapabilities;
    void rotateOrientation;
    void testName;
    void timeoutInSeconds;
}

@property (nonatomic, readonly) unsigned long long aggregate;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) long long rotateOrientation;
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) double timeoutInSeconds;

- (void).cxx_destruct;
- (unsigned long long)aggregate;
- (id)init;
- (id)requiredCapabilities;
- (long long)rotateOrientation;
- (id)testName;
- (double)timeoutInSeconds;

@end
