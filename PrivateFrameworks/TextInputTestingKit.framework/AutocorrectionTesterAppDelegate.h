
@interface AutocorrectionTesterAppDelegate : NSObject {
    NSMutableDictionary * _options;
}

+ (id)reporterWithOptions:(id)arg1;
+ (void)setupSingletonMocksWithOptions:(id)arg1;
+ (void)teardownSingletonMocks;

- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1 andText:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (void)resetOptions:(id)arg1;
- (bool)runAndWriteReport;
- (bool)runAutocorrectionTester:(id /* block */)arg1;
- (double)runDslTest:(id)arg1 withHarnessClass:(Class)arg2 forLanguage:(id)arg3 errorMessage:(id)arg4;
- (bool)runTestCasesForSource:(id)arg1 errorMessage:(id)arg2 reportObserver:(id /* block */)arg3;
- (bool)runTests:(id)arg1 withHarnessClass:(Class)arg2 forLanguage:(id)arg3 errorMessage:(id)arg4 reportObserver:(id /* block */)arg5;
- (bool)runWithObserver:(id /* block */)arg1;

@end
