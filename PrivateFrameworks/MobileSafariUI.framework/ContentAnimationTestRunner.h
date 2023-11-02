
@interface ContentAnimationTestRunner : PurplePageLoadTestRunner {
    NSMutableDictionary * _outputData;
    double  _testDuration;
}

- (void).cxx_destruct;
- (id)finalStatusForPage:(id)arg1;
- (void)finishedTestPage:(id)arg1;
- (void)finishedTestRunner;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (id)outputDataForPage:(id)arg1;
- (bool)performActionForPage:(id)arg1;
- (bool)startPageAction:(id)arg1;
- (void)writeOutputData;

@end
