
@interface SNTestSuite : NSObject {
    SNTestSuite * _parentTestSuite;
    NSMutableArray * _subTestSuites;
    NSMutableDictionary * _testCases;
}

@property (nonatomic) SNTestSuite *parentTestSuite;
@property (nonatomic, readonly) NSMutableArray *subTestSuites;
@property (nonatomic, readonly) NSMutableDictionary *testCases;

- (void).cxx_destruct;
- (void)addSubTestSuite:(id)arg1;
- (void)addTestCase:(id)arg1;
- (id)init;
- (id)parentTestSuite;
- (void)setParentTestSuite:(id)arg1;
- (id)subTestSuites;
- (id)testCases;
- (id)testRunForTestName:(id)arg1;
- (id)testSetupList;

@end
