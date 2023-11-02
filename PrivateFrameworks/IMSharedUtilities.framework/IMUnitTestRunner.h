
@interface IMUnitTestRunner : NSObject <XCTestObservation> {
    IMUnitTestBundleLoader * _bundleLoader;
    <IMUnitTestRunnerDelegate> * _delegate;
    NSMutableArray * _failedTests;
    IMUnitTestFrameworkLoader * _frameworkLoader;
    IMUnitTestLogger * _logger;
}

@property (readonly) IMUnitTestBundleLoader *bundleLoader;
@property (readonly, copy) NSString *debugDescription;
@property <IMUnitTestRunnerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *failedTests;
@property (readonly) IMUnitTestFrameworkLoader *frameworkLoader;
@property (readonly) unsigned long long hash;
@property (readonly) IMUnitTestLogger *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_loadFrameworksIfNeeded:(id*)arg1;
- (id)bundleLoader;
- (id)dateFormatter;
- (id)delegate;
- (id)descriptionFromResult:(id)arg1;
- (id)failedTests;
- (id)frameworkLoader;
- (id)init;
- (id)initWithLogger:(id)arg1 bundleLoader:(id)arg2;
- (id)initWithLogger:(id)arg1 bundleLoader:(id)arg2 frameworkLoader:(id)arg3;
- (void)log:(id)arg1;
- (void)logBanner:(id)arg1;
- (id)logger;
- (id)pathToPluginBundle:(id)arg1;
- (long long)runTestsInBundleAtPath:(id)arg1;
- (id)runTestsInBundleAtPath:(id)arg1 error:(id*)arg2;
- (id)runTestsInBundleNamed:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCaseWillStart:(id)arg1;
- (void)testLogWithFormat:(id)arg1;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuiteWillStart:(id)arg1;

@end
