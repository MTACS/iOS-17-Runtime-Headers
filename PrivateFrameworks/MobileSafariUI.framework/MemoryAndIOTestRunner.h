
@interface MemoryAndIOTestRunner : NSObject {
    BrowserController * _browserController;
    id /* block */  _completionHandler;
    unsigned long long  _liveTabs;
    unsigned long long  _tabsLoadedCount;
    NSString * _testName;
    unsigned long long  _totalTabsToLoad;
    unsigned long long  _type;
    int  writesAtStart;
}

@property (nonatomic, readonly) NSURL *testPageURL;

- (void).cxx_destruct;
- (unsigned long long)_collectCurrentLiveTabs;
- (void)_collectIOUsageInfo:(id)arg1;
- (void)_collectMemoryUsageInfo:(id)arg1;
- (void)_collectTestResults;
- (void)_openNewTabAndLoadTestURL;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2 type:(unsigned long long)arg3;
- (void)runTestWithCompletion:(id /* block */)arg1;
- (id)testPageURL;

@end
