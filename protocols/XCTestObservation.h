
@protocol XCTestObservation <NSObject>

@optional

- (void)testBundleDidFinish:(NSBundle *)arg1;
- (void)testBundleWillStart:(NSBundle *)arg1;
- (void)testCase:(XCTestCase *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testCase:(XCTestCase *)arg1 didRecordExpectedFailure:(XCTExpectedFailure *)arg2;
- (void)testCase:(XCTestCase *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (void)testCaseDidFinish:(XCTestCase *)arg1;
- (void)testCaseWillStart:(XCTestCase *)arg1;
- (void)testSuite:(XCTestSuite *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testSuite:(XCTestSuite *)arg1 didRecordExpectedFailure:(XCTExpectedFailure *)arg2;
- (void)testSuite:(XCTestSuite *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (void)testSuiteDidFinish:(XCTestSuite *)arg1;
- (void)testSuiteWillStart:(XCTestSuite *)arg1;

@end
