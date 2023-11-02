
@interface NewsUI2.PersonalizationScriptTestCase : NSObject <SNTestCaseRun> {
    void $__lazy_storage_$_dataStore;
    void aggregate;
    void aggregateStoreProvider;
    void commandCenter;
    void tagService;
    void testName;
    void timeoutInSeconds;
    void tracker;
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
