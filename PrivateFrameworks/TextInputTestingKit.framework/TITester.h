
@interface TITester : NSObject {
    TIReporter * _reporter;
    NSArray * _tests;
    <TITestHarness> * testHarness;
}

@property (nonatomic, retain) TIReporter *reporter;
@property (nonatomic, retain) <TITestHarness> *testHarness;
@property (nonatomic, readonly) NSArray *tests;

+ (void)runTestCasesForSource:(id)arg1 options:(id)arg2 reporter:(id)arg3 reportObserver:(id /* block */)arg4;
+ (void)runWithTests:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 testHarness:(id)arg3 reporter:(id)arg4 numTrials:(unsigned long long)arg5 reportObserver:(id /* block */)arg6;
+ (id)stringByReplacingCurlyQuotesWithStraightQuotes:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTests:(id)arg1;
- (id)reporter;
- (void)runTestsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 trialID:(unsigned long long)arg2;
- (void)setReporter:(id)arg1;
- (void)setTestHarness:(id)arg1;
- (id)testHarness;
- (id)tests;

@end
